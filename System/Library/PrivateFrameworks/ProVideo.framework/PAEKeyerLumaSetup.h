/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/NSCoding.h>

@class NSNumber;

@interface PAEKeyerLumaSetup : NSObject <NSCoding> {

	NSNumber* _lumA;
	NSNumber* _lumB;
	NSNumber* _lumC;
	NSNumber* _lumD;

}
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(float)lumA;
-(float)lumB;
-(float)lumC;
-(float)lumD;
-(void)setLumA:(float)arg1 ;
-(void)setLumB:(float)arg1 ;
-(void)setLumC:(float)arg1 ;
-(void)setLumD:(float)arg1 ;
-(void)setLumANumber:(id)arg1 ;
-(void)setLumBNumber:(id)arg1 ;
-(void)setLumCNumber:(id)arg1 ;
-(void)setLumDNumber:(id)arg1 ;
@end

