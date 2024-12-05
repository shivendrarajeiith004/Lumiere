#include "motion.h"
#include <stdio.h>

void set_initial_velocity(struct Body *body, double initial_velocity) {
  body->initial_velocity = initial_velocity;
}

void set_final_velocity(struct Body *body, double final_velocity) {
  body->final_velocity = final_velocity;
}

void set_acceleration(struct Body *body, double acceleration) {
  body->acceleration = acceleration;
}

void set_position(struct Body *body, double position) {
  body->position = position;
}

void set_time(struct Body *body, double time) { body->time = time; }

void calculate_final_velocity(struct Body *body) {
  body->final_velocity =
      body->initial_velocity + (body->acceleration * body->time);
}

void calculate_displacement_time(struct Body *body) {
  body->position = (body->initial_velocity * body->time) +
                   (0.5 * body->acceleration * body->time * body->time);
}

void calculate_velocity_squared(struct Body *body) {
  body->final_velocity = (body->initial_velocity * body->initial_velocity) +
                         (2 * body->acceleration * body->position);
}

void calculate_displacement_final_velocity(struct Body *body) {
  body->position = (body->final_velocity * body->time) -
                   (0.5 * body->acceleration * body->time * body->time);
}

void calculate_displacement_avg_velocity(struct Body *body) {
  body->position =
      ((body->initial_velocity + body->final_velocity) / 2.0) * body->time;
}
