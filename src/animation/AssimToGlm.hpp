#ifndef _LEARN_OPENGL_SRC_ANIMATION_ASSIMTOGLM_H_
#define _LEARN_OPENGL_SRC_ANIMATION_ASSIMTOGLM_H_
#include<assimp/quaternion.h>
#include<assimp/vector3.h>
#include<assimp/matrix4x4.h>
#include<glm/glm.hpp>
#include<glm/gtc/quaternion.hpp>
namespace gl_animation {

class AssimpTOGlm {
 public:
  static glm::mat4 convert_matrix_to_glm_format(const aiMatrix4x4& from) {
    glm::mat4 to;
    to[0][0] = from.a1; to[1][0] = from.a2; to[2][0] = from.a3; to[3][0] = from.a4;
		to[0][1] = from.b1; to[1][1] = from.b2; to[2][1] = from.b3; to[3][1] = from.b4;
		to[0][2] = from.c1; to[1][2] = from.c2; to[2][2] = from.c3; to[3][2] = from.c4;
		to[0][3] = from.d1; to[1][3] = from.d2; to[2][3] = from.d3; to[3][3] = from.d4;
		return to;
  }

  static glm::vec3 get_glm_vec(const aiVector3D& vec) {
    return glm::vec3(vec.x, vec.y, vec.z);
  }

  static glm::quat get_glm_quat(const aiQuaternion& q) {
    return glm::quat(q.w, q.x, q.y, q.z);
  }
};

}

#endif