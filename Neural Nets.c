
//Neural Networks Project in progress

#include <stdio.h>

int main()
{
    
    "sunglasses" recognizer; 
 // load_target -> 
  f (!strcmp(eyes, "sunglasses")) {
      
// "face" recognizer
 
char targetUser[20][40] = {
  "an2i",
  "at33",
  "boland",
  "bpm",
  "ch4f",
  "cheyer",
  "choon",
  "danieln",
  "glickman",
  "karyadi",
  "kawamura",
  "kk49",
  "megak",
  "mitchell",
  "night",
  "phoebe",
  "saavik",
  "steffi",
  "sz24",
  "tammo"
};

  for(int i=1; i<=net->output_n; i++) {
    if (!strcmp(userid, targetUser[i-1])) {
      net->target[i] = TARGET_HIGH;  /* it's me, set target to HIGH */
    } else {
      net->target[i] = TARGET_LOW;   /* not me, set it to LOW */
    }
  }
// facetrain.c: evaluate_performance ->
  int n = net->output_n;
  double delta = 0.0;
  int index;
  double target_value = 0.0;

  for (int j = 1; j <= n; j++) {
    delta += net->target[j] - net->output_units[j];
    // find max and pick as the target
    if(net->target[j]>target_value) {
      index = j;
      target_value = net->target[j];
    }
  }
  // the error should be the the sum of errors for all the target-input delta diffs
  *err = 0.5 * delta * delta;

  // similar as before but now we only check the max-picked target and output units
  if(target_value > 0.5) {
    if(net->output_units[index] > 0.5) {
      return (1);
    } else return (0);
  } else {
    if(net->output_units[index] > 0.5) {
      return (0);
    } else return (1);
  }


//"pose" recognizer 
char targetPose[4][10] = {
  "straight",
  "left",
  "right",
  "up"
};

  for(int i=1; i<=net->output_n; i++) {
    if (!strcmp(head, targetPose[i-1])) {
      net->target[i] = TARGET_HIGH;  /* it's me, set target to HIGH */
    } else {
      net->target[i] = TARGET_LOW;   /* not me, set it to LOW */
    }
  }

    return 0;
}


