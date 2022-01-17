extern keymap_config_t keymap_config;


#include "macros.c"

layer_state_t layer_state_set_user(layer_state_t state) {
  writePin(B0, !IS_LAYER_ON_STATE(state, _A_NAV));
  writePin(D5, !IS_LAYER_ON_STATE(state, _A_MOU));
  return state;
}

