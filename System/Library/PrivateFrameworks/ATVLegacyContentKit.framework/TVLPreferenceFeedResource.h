/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLDictionaryFeedResource.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface TVLPreferenceFeedResource : TVLDictionaryFeedResource {

	NSString* _path;
	BOOL _dirty;
	NSObject*<OS_dispatch_queue> _prefsWriteQueue;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)setFeedResource:(id)arg1 named:(id)arg2 ;
-(void)_savePrefs;
-(void)clearFeedResources;
@end

