/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <SplashBoard/NSCopying.h>

@class NSString;

@interface XBSnapshotContainerIdentity : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _dataContainerPath;
	NSString* _bundleContainerPath;
	NSString* _snapshotContainerPath;

}

@property (nonatomic,copy,readonly) NSString * snapshotContainerPath;              //@synthesize snapshotContainerPath=_snapshotContainerPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath;                         //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataContainerPath;                  //@synthesize dataContainerPath=_dataContainerPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleContainerPath;                //@synthesize bundleContainerPath=_bundleContainerPath - In the implementation block
+(id)identityForBundleProxy:(id)arg1 ;
+(id)identityForApplicationInfo:(id)arg1 ;
+(id)identityForCompatibilityInfo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSString *)bundleContainerPath;
-(id)_initWithBundleIdentifier:(id)arg1 bundlePath:(id)arg2 dataContainerPath:(id)arg3 bundleContainerPath:(id)arg4 ;
-(NSString *)snapshotContainerPath;
-(id)snapshotContainerPathForGroupID:(id)arg1 ;
-(NSString *)dataContainerPath;
-(id)snapshotContainerPathForSnapshot:(id)arg1 ;
@end

