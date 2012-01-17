/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_badlogic_gdx_physics_box2d_PolygonShape */

#ifndef _Included_com_badlogic_gdx_physics_box2d_PolygonShape
#define _Included_com_badlogic_gdx_physics_box2d_PolygonShape
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_badlogic_gdx_physics_box2d_PolygonShape
 * Method:    newPolygonShape
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_physics_box2d_PolygonShape_newPolygonShape
  (JNIEnv *, jobject);

/*
 * Class:     com_badlogic_gdx_physics_box2d_PolygonShape
 * Method:    jniSet
 * Signature: (J[F)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_physics_box2d_PolygonShape_jniSet
  (JNIEnv *, jobject, jlong, jfloatArray);

/*
 * Class:     com_badlogic_gdx_physics_box2d_PolygonShape
 * Method:    jniSetAsBox
 * Signature: (JFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_physics_box2d_PolygonShape_jniSetAsBox__JFF
  (JNIEnv *, jobject, jlong, jfloat, jfloat);

/*
 * Class:     com_badlogic_gdx_physics_box2d_PolygonShape
 * Method:    jniSetAsBox
 * Signature: (JFFFFF)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_physics_box2d_PolygonShape_jniSetAsBox__JFFFFF
  (JNIEnv *, jobject, jlong, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_badlogic_gdx_physics_box2d_PolygonShape
 * Method:    jniGetVertexCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_physics_box2d_PolygonShape_jniGetVertexCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_badlogic_gdx_physics_box2d_PolygonShape
 * Method:    jniGetVertex
 * Signature: (JI[F)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_physics_box2d_PolygonShape_jniGetVertex
  (JNIEnv *, jobject, jlong, jint, jfloatArray);

#ifdef __cplusplus
}
#endif
#endif