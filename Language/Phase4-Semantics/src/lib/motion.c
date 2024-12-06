#include "motion.h"
#include <math.h>
#include <stdio.h>

// Setter functions
void set_initial_vel(struct Body *body, double init_vel) {
  body->init_vel = init_vel;
}

void set_final_vel(struct Body *body, double final_vel) {
  body->final_vel = final_vel;
}

void set_accl(struct Body *body, double accl) { body->accl = accl; }

void set_final_pos(struct Body *body, double init_pos) {
  body->final_pos = init_pos;
}

void set_init_pos(struct Body *body, double init_pos) {
  body->init_pos = init_pos;
}

void set_init_time(struct Body *body, double init_time) {
  body->init_time = init_time;
}

void set_final_time(struct Body *body, double final_time) {
  body->final_time = final_time;
}
// Equations of motion
void calculate_final_vel(struct Body *body) {
  body->final_vel =
      body->init_vel + (body->accl * (body->final_time - body->init_time));
}

void calculate_displacement_time(struct Body *body) {
  body->final_pos = body->init_pos +
                    (body->init_vel * (body->final_time - body->init_time)) +
                    (0.5 * body->accl * (body->final_time - body->init_time) *
                     (body->final_time - body->init_time));
}

void calculate_velocity_squared(struct Body *body) {
  body->final_vel = sqrt((body->init_vel * body->init_vel) +
                         (2 * body->accl * (body->final_pos - body->init_pos)));
}

void calculate_displacement_final_vel(struct Body *body) {
  body->final_pos = body->init_pos +
                    (body->final_vel * (body->final_time - body->init_time)) -
                    (0.5 * body->accl * (body->final_time - body->init_time) *
                     (body->final_time - body->init_time));
}

void calculate_displacement_avg_velocity(struct Body *body) {
  body->final_pos =
      body->init_pos + ((body->init_vel + body->final_vel) / 2.0) *
                           (body->final_time - body->init_time);
}

// Additional functions
void calculate_time_from_displacement(struct Body *body) {
  double a = 0.5 * body->accl;
  double b = body->init_vel;
  double c = body->init_pos - body->final_pos;
  double discriminant = b * b - 4 * a * c;

  if (discriminant < 0) {
    printf("No real solution for time.\n");
    return;
  }

  double t1 = (-b + sqrt(discriminant)) / (2 * a);
  double t2 = (-b - sqrt(discriminant)) / (2 * a);

  printf("Possible times: t1 = %lf, t2 = %lf\n", t1, t2);
}

void calculate_accl_from_motion(struct Body *body) {
  if (body->final_time - body->init_time == 0) {
    printf("Time difference is zero; cannot calculate accl.\n");
    return;
  }
  body->accl =
      (body->final_vel - body->init_vel) / (body->final_time - body->init_time);
}

void calculate_time_from_velocity(struct Body *body) {
  if (body->accl == 0) {
    printf("accl is zero; cannot calculate time.\n");
    return;
  }
  double time = (body->final_vel - body->init_vel) / body->accl;
  printf("Calculated time: %lf\n", time);
}

void calculate_initial_velocity_from_motion(struct Body *body) {
  if (body->final_time - body->init_time == 0) {
    printf("Time difference is zero; cannot calculate initial velocity.\n");
    return;
  }
  body->init_vel =
      body->final_vel - (body->accl * (body->final_time - body->init_time));
}

void calculate_mass_energy(struct Body *body) {

  double energy = 0.5 * body->mass * final_vel * final_vel;
  printf("Kinetic-energy equivalence: E = %lf Joules\n", energy);
}
