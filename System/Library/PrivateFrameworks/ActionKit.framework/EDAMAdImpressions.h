/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMAdImpressions : FATObject {

	NSNumber* _adId;
	NSNumber* _impressionCount;
	NSNumber* _impressionTime;

}

@property (nonatomic,retain) NSNumber * adId;                         //@synthesize adId=_adId - In the implementation block
@property (nonatomic,retain) NSNumber * impressionCount;              //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,retain) NSNumber * impressionTime;               //@synthesize impressionTime=_impressionTime - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)adId;
-(void)setAdId:(NSNumber *)arg1 ;
-(NSNumber *)impressionCount;
-(void)setImpressionCount:(NSNumber *)arg1 ;
-(NSNumber *)impressionTime;
-(void)setImpressionTime:(NSNumber *)arg1 ;
@end
