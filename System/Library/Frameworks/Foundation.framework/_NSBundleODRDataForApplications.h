/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSBundleODRDataCommon.h>

@protocol OS_dispatch_group;
@class NSDictionary, NSMutableSet, NSObject, NSString;

@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon {

	NSDictionary* _tagToTagState;
	NSMutableSet* _extensionConnections;
	NSObject*<OS_dispatch_group> _initialStateGroup;
	NSString* _rootSandboxPath;

}
+(id)dataForBundle:(id)arg1 createIfRequired:(BOOL)arg2 ;
-(id)description;
-(void)dealloc;
-(id)initWithBundle:(id)arg1 ;
-(BOOL)assetPacksBecameAvailable:(id)arg1 error:(id*)arg2 ;
-(BOOL)assetPacksBecameUnavailable:(id)arg1 error:(id*)arg2 ;
-(BOOL)_waitForDaemon;
-(void)addExtensionEndpoint:(id)arg1 ;
-(double)preservationPriorityForTag:(id)arg1 ;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 ;
@end

