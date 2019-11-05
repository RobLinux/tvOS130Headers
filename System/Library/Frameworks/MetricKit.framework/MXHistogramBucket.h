/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/NSSecureCoding.h>

@class NSMeasurementFormatter, NSMeasurement;

@interface MXHistogramBucket : NSObject <NSSecureCoding> {

	NSMeasurementFormatter* _histogramBucketFormatter;
	NSMeasurement* _bucketStart;
	NSMeasurement* _bucketEnd;
	unsigned long long _bucketCount;

}

@property (readonly) NSMeasurement * bucketStart;                 //@synthesize bucketStart=_bucketStart - In the implementation block
@property (readonly) NSMeasurement * bucketEnd;                   //@synthesize bucketEnd=_bucketEnd - In the implementation block
@property (readonly) unsigned long long bucketCount;              //@synthesize bucketCount=_bucketCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(unsigned long long)bucketCount;
-(id)initWithBucketStart:(id)arg1 bucketEnd:(id)arg2 bucketCount:(unsigned long long)arg3 ;
-(NSMeasurement *)bucketStart;
-(NSMeasurement *)bucketEnd;
@end

