/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@class MXAverage;

@interface MXDisplayMetric : MXMetric {

	MXAverage* _averagePixelLuminance;

}

@property (readonly) MXAverage * averagePixelLuminance;              //@synthesize averagePixelLuminance=_averagePixelLuminance - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithAveragePictureLevel:(id)arg1 ;
-(MXAverage *)averagePixelLuminance;
@end

