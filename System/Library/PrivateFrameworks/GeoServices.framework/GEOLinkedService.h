/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDLinkedService, NSArray, NSTimeZone, NSString, GEOFeatureStyleAttributes;

@interface GEOLinkedService : NSObject {

	GEOPDLinkedService* _linkedService;
	NSArray* _cachedBusinessHours;
	BOOL _checkedForBusinessHoursAlready;
	NSTimeZone* _timeZone;
	NSArray* _businessHours;
	NSString* _localizedCategoryName;
	GEOFeatureStyleAttributes* _styleAttributes;

}

@property (nonatomic,retain) NSTimeZone * timeZone;                                    //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSArray * businessHours;                                  //@synthesize businessHours=_businessHours - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;                         //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
@property (nonatomic,retain) GEOFeatureStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOFeatureStyleAttributes *)arg1 ;
-(id)initWithGEOPDLinkedService:(id)arg1 timeZone:(id)arg2 ;
-(NSArray *)businessHours;
-(NSString *)localizedCategoryName;
-(void)setBusinessHours:(NSArray *)arg1 ;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
@end

