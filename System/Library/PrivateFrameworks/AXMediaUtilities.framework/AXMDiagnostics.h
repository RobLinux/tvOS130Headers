/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface AXMDiagnostics : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_diagnosticMetrics;
	NSMutableArray* _queue_visionObservations;
	BOOL _diagnosticsEnabled;

}

@property (assign,nonatomic) BOOL diagnosticsEnabled;                          //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metrics; 
@property (nonatomic,copy,readonly) NSArray * visionObservations; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSArray *)metrics;
-(void)clearMetrics;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(BOOL)diagnosticsEnabled;
-(id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(/*^block*/id)arg3 ;
-(void)addMetric:(id)arg1 ;
-(id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(/*^block*/id)arg3 signpostStartBlock:(/*^block*/id)arg4 signpostEndBlock:(/*^block*/id)arg5 ;
-(id)startMeasurement:(long long)arg1 name:(id)arg2 ;
-(void)appendVisionObservations:(id)arg1 ;
-(NSArray *)visionObservations;
@end
