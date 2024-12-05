
#ifndef MOTION_H
#define MOTION_H

struct Body {
  double initial_velocity;
  double final_velocity;
  double acceleration;
  double position;
  double time;
};

void set_initial_velocity(struct Body *body, double initial_velocity);
void set_final_velocity(struct Body *body, double final_velocity);
void set_acceleration(struct Body *body, double acceleration);
void set_position(struct Body *body, double position);
void set_time(struct Body *body, double time);

void calculate_final_velocity(struct Body *body);
void calculate_displacement_time(struct Body *body);
void calculate_velocity_squared(struct Body *body);
void calculate_displacement_final_velocity(struct Body *body);
void calculate_displacement_avg_velocity(struct Body *body);

#endif
