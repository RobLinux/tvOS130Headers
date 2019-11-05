/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface VUIMetricsPageEventData : NSObject {

	NSString* _pageId;
	NSString* _pageType;
	NSDictionary* _eventData;

}

@property (nonatomic,retain) NSString * pageId;                     //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,retain) NSString * pageType;                   //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,retain) NSDictionary * eventData;              //@synthesize eventData=_eventData - In the implementation block
+(id)createWithPageId:(id)arg1 andPageType:(id)arg2 andEventData:(id)arg3 ;
+(id)createWithPageType:(id)arg1 ;
+(id)createWithMetricsData:(id)arg1 ;
-(NSString *)pageType;
-(void)setPageType:(NSString *)arg1 ;
-(NSDictionary *)eventData;
-(void)setEventData:(NSDictionary *)arg1 ;
-(void)setPageId:(NSString *)arg1 ;
-(NSString *)pageId;
-(id)generateMetricsDataDictionary;
@end

