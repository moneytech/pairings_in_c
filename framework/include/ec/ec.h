/*
 * ec.h
 *
 *  Created on: Apr 22, 2013
 *      Author: thomas
 */

#ifndef EC_H_
#define EC_H_

#include "ec/ecfp2_std.h"
#include "ec/ecfp_std.h"

#define ecfp_add_proj(res, a, b)	ecfp_add_proj_std(res, a, b)
#define ecfp_dbl_proj(res, a)		ecfp_dbl_proj_std(res, a)
#define ecfp_add_affine(res, a, b)	ecfp_add_affine_direct_std(res, a, b)
#define ecfp_dbl_affine(res, a)		ecfp_dbl_affine_direct_std(res, a)
#define ecfp_mul(res, a, k)			ecfp_mul_montyladder_std(res, a, k)
#define ecfp_get_affine(a, p)		ecfp_get_affine_std(a, p)
#define ecfp_get_projective(p, a)	ecfp_get_projective_std(p, a)
#define ecfp_neg_affine(a)			ecfp_neg_affine_std(a)
#define ecfp_neg_proj(a)			ecfp_neg_proj_std(a)
#define ecfp_copy(res, a)			ecfp_copy_std(res, a)
#define ecfp_clear(a)				ecfp_clear_std(a)
#define ecfp_hash_to_point(res, t)	ecfp_hash_to_point_std(res, t)
#define ecfp_to_montgomery(res, a)	ecfp_to_montgomery_std(res, a)
#define ecfp_from_montgomery(res, a) ecfp_from_montgomery_std(res, a)

#define ecfp2_add_proj(res, a, b)	ecfp2_add_proj_std(res, a, b)
#define ecfp2_dbl_proj(res, a)		ecfp2_dbl_proj_std(res, a)
#define ecfp2_add_affine(res, a, b)	ecfp2_add_affine_direct_std(res, a, b)
#define ecfp2_dbl_affine(res, a)	ecfp2_dbl_affine_direct_std(res, a)
//#define ecfp2_mul(res, a, k)		ecfp2_mul_l2rb_std(res, a, k)
#define ecfp2_mul(res, a, k)		ecfp2_mul_montyladder_std(res, a, k)
#define ecfp2_get_affine(a, p)		ecfp2_get_affine_std(a, p)
#ifdef RAND_PROJECTIVE_COORDINATES
 #define ecfp2_get_projective(p, a)	ecfp2_get_projective_rnd_std(p, a)
#else
 #define ecfp2_get_projective(p, a)	ecfp2_get_projective_std(p, a)
#endif
#define ecfp2_neg_affine(a)			ecfp2_neg_affine_std(a)
#define ecfp2_neg_proj(a)			ecfp2_neg_proj_std(a)
#define ecfp2_copy(res, a)			ecfp2_copy_std(res, a)
#define ecfp2_clear(a)				ecfp2_clear_std(a)
#define ecfp2_frobenius_map(res, a, i)	ecfp2_frobenius_map_precomp_std(res, a, i)
#define ecfp2_compare(a, b)			ecfp2_compare_std(a, b)
#define ecfp2_hash_to_point(res, t)	ecfp2_hash_to_point_std(res, t)
#define ecfp2_to_montgomery(res, a)	ecfp2_to_montgomery_std(res, a)
#define ecfp2_from_montgomery(res, a) 	ecfp2_from_montgomery_std(res, a)

#endif /* EC_H_ */