/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSSet;

@interface WFContentItemRegistry : NSObject {

	os_unfair_lock_s _discoveryLock;
	NSMutableDictionary* _contentItemClassesByType;
	NSMutableSet* _allItemClasses;

}

@property (nonatomic,readonly) NSMutableDictionary * contentItemClassesByType;              //@synthesize contentItemClassesByType=_contentItemClassesByType - In the implementation block
@property (nonatomic,readonly) NSMutableSet * allItemClasses;                               //@synthesize allItemClasses=_allItemClasses - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s discoveryLock;                              //@synthesize discoveryLock=_discoveryLock - In the implementation block
@property (nonatomic,readonly) NSSet * contentItemClasses; 
@property (nonatomic,readonly) NSSet * allOwnedTypes; 
+(id)allContentItemClassesInActionKit;
+(id)allContentItemClassesInWorkflowKit;
+(id)sharedRegistry;
+(id)allContentItemClassesInContentKit;
-(id)init;
-(os_unfair_lock_s)discoveryLock;
-(Class)contentItemClassForType:(id)arg1 ;
-(void)rediscoverContentItemClassesIfNeeded;
-(void)registerContentItemClass:(Class)arg1 ;
-(NSSet *)allOwnedTypes;
-(NSSet *)contentItemClasses;
-(id)contentItemClassesSupportingType:(id)arg1 ;
-(NSMutableDictionary *)contentItemClassesByType;
-(NSMutableSet *)allItemClasses;
-(id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1 ;
-(id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 ;
@end

