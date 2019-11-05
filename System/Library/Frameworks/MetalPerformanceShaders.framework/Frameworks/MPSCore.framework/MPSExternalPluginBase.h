/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSExternalPluginBase.h>

@protocol MPSExternalPluginBase <NSObject>
@required
-(id)device;
-(id)initWithDevice:(id)arg1;
-(unsigned long long)maxBatchSize;

@end


@protocol MTLDevice;
@class NSString;

@interface MPSExternalPluginBase : NSObject <MPSExternalPluginBase> {

	MPSExternalPluginBase* _self;
	id<MTLDevice> _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(id)init;
-(id)device;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)maxBatchSize;
@end

