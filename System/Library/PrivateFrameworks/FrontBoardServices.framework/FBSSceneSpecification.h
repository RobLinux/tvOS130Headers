/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/NSCopying.h>
#import <FrontBoardServices/BSDescriptionProviding.h>

@class NSArray, NSDictionary, NSString;

@interface FBSSceneSpecification : NSObject <NSCopying, BSDescriptionProviding> {

	BOOL _forLocalSynchronousSceneClientProvider;

}

@property (nonatomic,readonly) NSArray * initialSettingsDiffActions; 
@property (nonatomic,readonly) NSArray * finalSettingsDiffActions; 
@property (nonatomic,readonly) NSArray * initialActionHandlers; 
@property (nonatomic,readonly) NSArray * finalActionHandlers; 
@property (nonatomic,readonly) NSDictionary * baseSceneComponentClassDictionary; 
@property (nonatomic,readonly) NSString * uiSceneSessionRole; 
@property (nonatomic,readonly) Class sceneSubstrateClass; 
@property (nonatomic,readonly) Class lifecycleMonitorClass; 
@property (nonatomic,readonly) Class uiSceneMinimumClass; 
@property (nonatomic,readonly) BOOL isUIKitManaged; 
@property (nonatomic,readonly) BOOL isInternal; 
@property (nonatomic,readonly) Class hostAgentClass; 
@property (nonatomic,readonly) Class clientAgentClass; 
@property (nonatomic,readonly) Class settingsClass; 
@property (nonatomic,readonly) Class clientSettingsClass; 
@property (nonatomic,readonly) Class transitionContextClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)specification;
+(/*function pointer*/void*)_swizzleMethodOnClass:(Class)arg1 originalSelector:(SEL)arg2 block:(id)arg3 ;
-(BOOL)isInternal;
-(id)connectionHandlers;
-(NSArray *)initialSettingsDiffActions;
-(NSArray *)finalSettingsDiffActions;
-(NSArray *)initialActionHandlers;
-(NSArray *)finalActionHandlers;
-(Class)lifecycleMonitorClass;
-(BOOL)isUIKitManaged;
-(id)disconnectionHandlers;
-(Class)uiSceneMinimumClass;
-(NSDictionary *)baseSceneComponentClassDictionary;
-(NSString *)uiSceneSessionRole;
-(Class)sceneSubstrateClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(Class)clientAgentClass;
-(Class)transitionContextClass;
-(Class)hostAgentClass;
-(Class)settingsClass;
-(Class)clientSettingsClass;
-(id)_copyForLocalSynchronousSceneClientProvider;
@end

