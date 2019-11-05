/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions, NSArray, NAFuture;

@interface HMBProcessingResult : HMFObject {

	HMBProcessingOptions* _options;
	NSArray* _actions;
	NAFuture* _mirrorOutputResult;

}

@property (nonatomic,readonly) HMBProcessingOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                           //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NAFuture * mirrorOutputResult;               //@synthesize mirrorOutputResult=_mirrorOutputResult - In the implementation block
-(HMBProcessingOptions *)options;
-(NSArray *)actions;
-(NAFuture *)mirrorOutputResult;
-(id)initWithOptions:(id)arg1 actions:(id)arg2 mirrorOutputResult:(id)arg3 ;
@end
