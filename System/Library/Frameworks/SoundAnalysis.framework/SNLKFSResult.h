/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable.h>
#import <SoundAnalysis/SNTimeRangeProviding.h>

@class NSString;

@interface SNLKFSResult : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	float _decibelLevel;
	SCD_Struct_SN4 timeRange;

}

@property (assign,nonatomic) float decibelLevel;                      //@synthesize decibelLevel=_decibelLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_SN4 timeRange; 
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(float)decibelLevel;
-(void)setDecibelLevel:(float)arg1 ;
@end

