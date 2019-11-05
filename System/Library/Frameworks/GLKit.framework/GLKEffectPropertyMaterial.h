/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKit-Structs.h>
#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyMaterial : GLKEffectProperty {

	GLKVector4 _ambientColor;
	GLKVector4 _diffuseColor;
	GLKVector4 _specularColor;
	GLKVector4 _emissiveColor;
	float _shininess;
	int _ambientColorLoc;
	int _diffuseColorLoc;
	int _specularColorLoc;
	int _emissiveColorLoc;
	int _shininessLoc;
	unsigned long long* _effectDirtyUniforms;
	GLKBigInt_s _colorMaterialEnabledMask;

}

@property (assign,nonatomic) int _ambientColorLoc;                                 //@synthesize ambientColorLoc=_ambientColorLoc - In the implementation block
@property (assign,nonatomic) int _diffuseColorLoc;                                 //@synthesize diffuseColorLoc=_diffuseColorLoc - In the implementation block
@property (assign,nonatomic) int _specularColorLoc;                                //@synthesize specularColorLoc=_specularColorLoc - In the implementation block
@property (assign,nonatomic) int _emissiveColorLoc;                                //@synthesize emissiveColorLoc=_emissiveColorLoc - In the implementation block
@property (assign,nonatomic) int _shininessLoc;                                    //@synthesize shininessLoc=_shininessLoc - In the implementation block
@property (assign,nonatomic) unsigned long long* effectDirtyUniforms;              //@synthesize effectDirtyUniforms=_effectDirtyUniforms - In the implementation block
@property (assign,nonatomic) GLKBigInt_s _colorMaterialEnabledMask;                //@synthesize colorMaterialEnabledMask=_colorMaterialEnabledMask - In the implementation block
@property (assign,nonatomic) _GLKVector4 ambientColor;                             //@synthesize ambientColor=_ambientColor - In the implementation block
@property (assign,nonatomic) _GLKVector4 diffuseColor;                             //@synthesize diffuseColor=_diffuseColor - In the implementation block
@property (assign,nonatomic) _GLKVector4 specularColor;                            //@synthesize specularColor=_specularColor - In the implementation block
@property (assign,nonatomic) _GLKVector4 emissiveColor;                            //@synthesize emissiveColor=_emissiveColor - In the implementation block
@property (assign,nonatomic) float shininess;                                      //@synthesize shininess=_shininess - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)bind;
-(void)dirtyAllUniforms;
-(void)setEffectDirtyUniforms:(unsigned long long*)arg1 ;
-(BOOL)includeVshShaderTextForRootNode:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg1 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(_GLKVector4)ambientColor;
-(_GLKVector4)emissiveColor;
-(void)setAmbientColor:(_GLKVector4)arg1 ;
-(void)setDiffuseColor:(_GLKVector4)arg1 ;
-(void)setSpecularColor:(_GLKVector4)arg1 ;
-(_GLKVector4)diffuseColor;
-(_GLKVector4)specularColor;
-(unsigned long long*)effectDirtyUniforms;
-(void)setEmissiveColor:(_GLKVector4)arg1 ;
-(void)setShininess:(float)arg1 ;
-(float)shininess;
-(int)_ambientColorLoc;
-(void)set_ambientColorLoc:(int)arg1 ;
-(int)_diffuseColorLoc;
-(void)set_diffuseColorLoc:(int)arg1 ;
-(int)_specularColorLoc;
-(void)set_specularColorLoc:(int)arg1 ;
-(int)_emissiveColorLoc;
-(void)set_emissiveColorLoc:(int)arg1 ;
-(int)_shininessLoc;
-(void)set_shininessLoc:(int)arg1 ;
-(GLKBigInt_s)_colorMaterialEnabledMask;
-(void)set_colorMaterialEnabledMask:(GLKBigInt_s)arg1 ;
@end

