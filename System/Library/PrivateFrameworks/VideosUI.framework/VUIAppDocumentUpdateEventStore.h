/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface VUIAppDocumentUpdateEventStore : NSObject {

	NSMutableDictionary* _eventByEventDescriptor;

}

@property (nonatomic,retain) NSMutableDictionary * eventByEventDescriptor;              //@synthesize eventByEventDescriptor=_eventByEventDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events; 
-(id)description;
-(id)init;
-(NSArray *)events;
-(void)addEvents:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)removeAllEvents;
-(NSMutableDictionary *)eventByEventDescriptor;
-(void)setEventByEventDescriptor:(NSMutableDictionary *)arg1 ;
@end

