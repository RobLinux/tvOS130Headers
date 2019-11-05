/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <SearchFoundation/NSCopying.h>

@class NSArray, NSString;

@interface SFRankingFeedback : SFFeedback <NSCopying> {

	double _blendingDuration;
	NSArray* _sections;
	NSString* _l2ModelVersion;
	NSString* _l3ModelVersion;
	NSString* _l2ShadowModelVersion;

}

@property (assign,nonatomic) double blendingDuration;                    //@synthesize blendingDuration=_blendingDuration - In the implementation block
@property (nonatomic,copy) NSArray * sections;                           //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * l2ModelVersion;                    //@synthesize l2ModelVersion=_l2ModelVersion - In the implementation block
@property (nonatomic,copy) NSString * l3ModelVersion;                    //@synthesize l3ModelVersion=_l3ModelVersion - In the implementation block
@property (nonatomic,copy) NSString * l2ShadowModelVersion;              //@synthesize l2ShadowModelVersion=_l2ShadowModelVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(double)blendingDuration;
-(id)initWithSections:(id)arg1 blendingDuration:(double)arg2 ;
-(void)setBlendingDuration:(double)arg1 ;
-(NSString *)l2ModelVersion;
-(void)setL2ModelVersion:(NSString *)arg1 ;
-(NSString *)l3ModelVersion;
-(void)setL3ModelVersion:(NSString *)arg1 ;
-(NSString *)l2ShadowModelVersion;
-(void)setL2ShadowModelVersion:(NSString *)arg1 ;
@end

