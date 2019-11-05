/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMProbeDelegate.h>
#import <MetricMeasurement/MXMInstrumental.h>
#import <MetricMeasurement/NSSecureCoding.h>

@class MXMProbe, NSString, MXMMutableSampleData, MXMSampleFilter, MXMInstrument;

@interface MXMMetric : NSObject <MXMProbeDelegate, MXMInstrumental, NSSecureCoding> {

	MXMProbe* _probe;
	NSString* _identifier;
	NSString* _version;
	NSString* _build;
	MXMMutableSampleData* _data;
	MXMSampleFilter* _filter;
	unsigned long long _preferredSampleMode;

}

@property (nonatomic,readonly) unsigned long long _sampleMode; 
@property (nonatomic,readonly) BOOL _shouldConstructProbe; 
@property (nonatomic,readonly) BOOL _shouldAlwaysWrapInProxy; 
@property (nonatomic,readonly) BOOL _shouldNeverWrapInProxy; 
@property (nonatomic,readonly) MXMInstrument * instrument; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,retain) MXMSampleFilter * filter;                            //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSString * build; 
@property (assign,nonatomic) unsigned long long preferredSampleMode;              //@synthesize preferredSampleMode=_preferredSampleMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)build;
-(MXMSampleFilter *)filter;
-(void)setFilter:(MXMSampleFilter *)arg1 ;
-(id)initWithIdentifier:(id)arg1 filter:(id)arg2 ;
-(void)setPreferredSampleMode:(unsigned long long)arg1 ;
-(id)_getProbe;
-(void)willStartAtEstimatedTime:(unsigned long long)arg1 ;
-(BOOL)_shouldConstructProbe;
-(id)_constructProbe;
-(unsigned long long)_sampleMode;
-(BOOL)prepareWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2 ;
-(void)willStop;
-(void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2 ;
-(BOOL)_shouldAlwaysWrapInProxy;
-(BOOL)_shouldNeverWrapInProxy;
-(BOOL)harvestData:(id*)arg1 error:(id*)arg2 ;
-(unsigned long long)preferredSampleMode;
-(void)probeDidUpdate:(id)arg1 data:(id)arg2 stop:(BOOL*)arg3 ;
-(MXMInstrument *)instrument;
-(BOOL)_shouldWrapInProxy;
@end

