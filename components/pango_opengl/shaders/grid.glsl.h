#include <inigo/tri_filtered_checker.glsl.h>

float checkerFilteredFaded( vec2 pos_grid, float distance, float max_distance )
{
  float check = checkersTextureGradTri( pos_grid, 2.0*dFdx( pos_grid ), 2.0*dFdy( pos_grid ) );
  float fadeout = max(max_distance - distance, 0.0) / max_distance;
  return mix(0.5, check, fadeout);
}
