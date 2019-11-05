/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <TVContentPartnerKitUI/TVCKDataClient.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class TVLLegacyJSContext, NSObject, TVLAppliance;

@interface TVLJSDataClient : TVCKDataClient {

	TVLLegacyJSContext* _jsContext;
	NSObject*<OS_dispatch_queue> _jsContextAccessQueue;
	NSObject*<OS_dispatch_source> _jsContextPurgeTimer;
	TVLAppliance* _appliance;

}

@property (nonatomic,readonly) TVLAppliance * appliance;              //@synthesize appliance=_appliance - In the implementation block
+(id)dataPropertyToFeedProperty:(id)arg1 ;
+(id)_dataTypeToFeedType:(id)arg1 ;
+(id)dataTypeFromFeedType:(id)arg1 ;
-(id)imageKeyForObject:(id)arg1 ;
-(void)cancelLoad:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(TVLAppliance *)appliance;
-(id)initWithAppliance:(id)arg1 ;
-(id)_queryDictionaryForQuery:(id)arg1 ;
-(void)_accessJSContextWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)_makeJSContext;
-(id)imageURLWithAsset:(id)arg1 size:(CGSize)arg2 crop:(BOOL)arg3 ;
-(void)concreteDataClientConnect;
-(void)concreteDataClientDisconnect;
-(void)executeQuery:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)processQueryAsync:(id)arg1 ;
@end

