#include <stdio.h>

// Predefined constants for user groups
#define BABY 0
#define CHILD 1
#define TEENAGER 2
#define YOUNG_ADULT 3
#define MIDDLE_AGED 4
#define ELDERLY 5

// Function to determine user group
void getUserGroup(int birthYear, int* group) {
  int age = 2024 - birthYear;
  if (age <= 2) {
    *group = BABY;
  } else if (age <= 12) {
    *group = CHILD;
  } else if (age <= 19) {
    *group = TEENAGER;
  } else if (age <= 39) {
    *group = YOUNG_ADULT;
  } else if (age <= 59) {
    *group = MIDDLE_AGED;
  } else {
    *group = ELDERLY;
  }
}

// Main function
int main() {
  int birthYear;
  int group;

  // Get birth year from user
  printf("Enter your birth year: ");
  scanf("%d", &birthYear);

  // Pass birthYear and address of group to getUserGroup
  getUserGroup(birthYear, &group);

  // Output result
  switch (group) {
    case BABY:
      printf("You are in the baby group (0-2 years old).\n");
      break;
    case CHILD:
      printf("You are in the child group (3-12 years old).\n");
      break;
    case TEENAGER:
      printf("You are in the teenager group (13-19 years old).\n");
      break;
    case YOUNG_ADULT:
      printf("You are in the young adult group (20-39 years old).\n");
      break;
    case MIDDLE_AGED:
      printf("You are in the middle-aged group (40-59 years old).\n");
      break;
    case ELDERLY:
      printf("You are in the elderly group (60 years old and above).\n");
      break;
  }

  return 0;
}

