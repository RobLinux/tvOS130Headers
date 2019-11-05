/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKitServices/NSCopying.h>
#import <UIKitServices/NSMutableCopying.h>
#import <UIKitServices/BSXPCCoding.h>

@class UISDisplayContext, UISDeviceContext, NSSet, FBSSceneIdentityToken, NSString;

@interface UISApplicationInitializationContext : NSObject <NSCopying, NSMutableCopying, BSXPCCoding> {

	UISDisplayContext* _displayContext;
	UISDeviceContext* _deviceContext;
	NSSet* _persistedSceneIdentifiers;
	FBSSceneIdentityToken* _defaultSceneToken;

}

@property (nonatomic,readonly) UISDisplayContext * displayContext;                     //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,readonly) UISDeviceContext * deviceContext;                       //@synthesize deviceContext=_deviceContext - In the implementation block
@property (nonatomic,readonly) NSSet * persistedSceneIdentifiers;                      //@synthesize persistedSceneIdentifiers=_persistedSceneIdentifiers - In the implementation block
@property (nonatomic,readonly) FBSSceneIdentityToken * defaultSceneToken;              //@synthesize defaultSceneToken=_defaultSceneToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultContext;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(UISDisplayContext *)displayContext;
-(UISDeviceContext *)deviceContext;
-(FBSSceneIdentityToken *)defaultSceneToken;
-(NSSet *)persistedSceneIdentifiers;
-(id)initWithDisplayContext:(id)arg1 deviceContext:(id)arg2 persistedSceneIdentifiers:(id)arg3 ;
-(id)initWithUISApplicationInitializationContext:(id)arg1 ;
@end

