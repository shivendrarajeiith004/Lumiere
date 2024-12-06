
#ifndef MOTION_H
#define MOTION_H

struct Body {
  double mass;
  double init_vel;
  double final_vel;
  double accl;
  double init_pos;
  double final_pos;
  double init_time;
  double final_time;
};

// Setter functions
void set_mass(struct Body *body, double mass);
void set_init_vel(struct Body *body, double init_vel);
void set_final_vel(struct Body *body, double final_vel);
void set_accl(struct Body *body, double accl);
void set_init_pos(struct Body *body, double init_pos);
void set_final_pos(struct Body *body, double init_pos);
void set_final_time(struct Body *body, double init_pos);
void set_init_time(struct Body *body, double init_time);

// Equations of motion functions
void calculate_final_vel(struct Body *body);         // v = u + at
void calculate_displacement_time(struct Body *body); // s = ut + 0.5 * a * t^2
void calculate_velocity_squared(struct Body *body);  // v^2 = u^2 + 2as
void calculate_displacement_final_vel(
    struct Body *body); // s = (v^2 - u^2) / (2a)
void calculate_displacement_avg_velocity(
    struct Body *body); // s = (u + v) * t / 2

// Additional functions for extended calculation
void calculate_time_from_displacement(
    struct Body *body); // t = (-u ± sqrt(u^2 + 2as)) / a
void calculate_accl_from_motion(struct Body *body);   // a = (v - u) / t
void calculate_time_from_velocity(struct Body *body); // t = (v - u) / a
void calculate_initial_velocity_from_motion(struct Body *body); // u = v - at
void calculate_mass_energy(struct Body *body); // E = mc^2 (special relativity)

#endif
