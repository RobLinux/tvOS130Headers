/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/NSCopying.h>

@class WebHistoryItemPrivate, NSString;

@interface WebHistoryItem : NSObject <NSCopying> {

	WebHistoryItemPrivate* _private;

}

@property (nonatomic,copy,readonly) NSString * originalURLString; 
@property (nonatomic,copy,readonly) NSString * URLString; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,copy) NSString * alternateTitle; 
+(void)initialize;
+(id)entryWithURL:(id)arg1 ;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)target;
-(id)URL;
-(id)children;
-(id)dictionaryRepresentation;
-(float)_scale;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)URLString;
-(id)dictionaryRepresentationIncludingChildren:(BOOL)arg1 ;
-(id)initFromDictionaryRepresentation:(id)arg1 ;
-(CGPoint)scrollPoint;
-(void)setViewState:(id)arg1 ;
-(double)lastVisitedTimeInterval;
-(void)_visitedWithTitle:(id)arg1 ;
-(id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3 ;
-(id)_redirectURLs;
-(id)initWithWebCoreHistoryItem:(Ref<WebCore::HistoryItem, WTF::DumbPtrTraits<WebCore::HistoryItem> >*)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 ;
-(id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4 ;
-(void)_setViewportArguments:(id)arg1 ;
-(NSString *)originalURLString;
-(void)setAlternateTitle:(NSString *)arg1 ;
-(NSString *)alternateTitle;
-(id)_viewportArguments;
-(BOOL)isTargetItem;
-(id)RSSFeedReferrer;
-(void)setRSSFeedReferrer:(id)arg1 ;
-(BOOL)lastVisitWasFailure;
-(void)_setScale:(float)arg1 isInitial:(BOOL)arg2 ;
-(BOOL)_scaleIsInitial;
-(CGPoint)_scrollPoint;
-(void)_setScrollPoint:(CGPoint)arg1 ;
-(BOOL)_isInPageCache;
-(BOOL)_hasCachedPageExpired;
@end

