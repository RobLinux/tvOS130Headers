/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSDictionary, NSString;

@interface VNBurstObservation : VNObservation {

	NSArray* _allImageIdentifiers;
	NSArray* _bestImageIdentifiers;
	NSDictionary* _allImageStats;
	NSString* _coverImageIdentifier;
	NSArray* _clusters;
	BOOL _isAction;
	BOOL _isPortrait;

}

@property (nonatomic,retain) NSArray * allImageIdentifiers;                //@synthesize allImageIdentifiers=_allImageIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * bestImageIdentifiers;               //@synthesize bestImageIdentifiers=_bestImageIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * allImageStats;                 //@synthesize allImageStats=_allImageStats - In the implementation block
@property (nonatomic,retain) NSString * coverImageIdentifier;              //@synthesize coverImageIdentifier=_coverImageIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * clusters;                           //@synthesize clusters=_clusters - In the implementation block
@property (assign,nonatomic) BOOL isAction;                                //@synthesize isAction=_isAction - In the implementation block
@property (assign,nonatomic) BOOL isPortrait;                              //@synthesize isPortrait=_isPortrait - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bestImageIdentifiers;
-(NSArray *)allImageIdentifiers;
-(BOOL)isAction;
-(BOOL)isPortrait;
-(NSString *)coverImageIdentifier;
-(void)setAllImageIdentifiers:(NSArray *)arg1 ;
-(NSArray *)clusters;
-(void)setClusters:(NSArray *)arg1 ;
-(void)setBestImageIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)allImageStats;
-(void)setAllImageStats:(NSDictionary *)arg1 ;
-(void)setCoverImageIdentifier:(NSString *)arg1 ;
-(void)setIsAction:(BOOL)arg1 ;
-(void)setIsPortrait:(BOOL)arg1 ;
@end

