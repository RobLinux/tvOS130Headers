/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSDate, NSString;

@interface VUIDebugMetricsEvent : NSObject {

	NSDictionary* _elements;
	NSDictionary* _timingElements;
	NSDictionary* _commonElements;
	NSDictionary* _reliableUnderlyingDictionary;

}

@property (nonatomic,retain) NSDictionary * reliableUnderlyingDictionary;              //@synthesize reliableUnderlyingDictionary=_reliableUnderlyingDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * elements;                                  //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSDictionary * timingElements;                            //@synthesize timingElements=_timingElements - In the implementation block
@property (nonatomic,retain) NSDictionary * commonElements;                            //@synthesize commonElements=_commonElements - In the implementation block
@property (nonatomic,readonly) NSArray * sortedElementKeys; 
@property (nonatomic,readonly) NSArray * sortedTimingKeys; 
@property (nonatomic,readonly) NSArray * sortedCommonKeys; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) NSString * eventType; 
@property (nonatomic,readonly) NSString * eventSubheader; 
@property (nonatomic,readonly) NSString * eventTertiaryInformation; 
@property (nonatomic,readonly) NSString * pageContext; 
@property (nonatomic,readonly) NSDictionary * rawEvent; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)elements;
-(void)setElements:(NSDictionary *)arg1 ;
-(NSString *)eventType;
-(NSDate *)eventDate;
-(NSString *)pageContext;
-(id)initWithEventDictionary:(id)arg1 termCollater:(id)arg2 ;
-(NSString *)eventSubheader;
-(NSString *)eventTertiaryInformation;
-(NSDictionary *)commonElements;
-(NSDictionary *)timingElements;
-(NSDictionary *)reliableUnderlyingDictionary;
-(NSArray *)sortedElementKeys;
-(NSArray *)sortedCommonKeys;
-(NSArray *)sortedTimingKeys;
-(NSDictionary *)rawEvent;
-(void)setTimingElements:(NSDictionary *)arg1 ;
-(void)setCommonElements:(NSDictionary *)arg1 ;
-(void)setReliableUnderlyingDictionary:(NSDictionary *)arg1 ;
@end

