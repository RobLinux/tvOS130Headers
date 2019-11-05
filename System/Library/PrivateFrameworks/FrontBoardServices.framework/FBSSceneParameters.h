/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/BSXPCCoding.h>
#import <FrontBoardServices/NSCopying.h>
#import <FrontBoardServices/NSMutableCopying.h>
#import <FrontBoardServices/BSDescriptionProviding.h>

@class FBSSceneSettings, FBSSceneClientSettings, FBSSceneSpecification, NSString;

@interface FBSSceneParameters : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSDescriptionProviding> {

	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	FBSSceneSpecification* _specification;

}

@property (nonatomic,copy) FBSSceneSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * clientSettings;                     //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parametersForSpecification:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(FBSSceneSettings *)settings;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)setClientSettings:(FBSSceneClientSettings *)arg1 ;
-(FBSSceneClientSettings *)clientSettings;
-(id)initWithSpecification:(id)arg1 ;
-(void)_configureCopy:(id)arg1 ;
@end

