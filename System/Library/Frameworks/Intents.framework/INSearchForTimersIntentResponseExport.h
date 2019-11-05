/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol INSearchForTimersIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * matchedTimers; 
@property (nonatomic,copy) NSArray * unmatchedTimers; 
@required
-(long long)code;
-(NSArray *)matchedTimers;
-(void)setMatchedTimers:(id)arg1;
-(NSArray *)unmatchedTimers;
-(void)setUnmatchedTimers:(id)arg1;

@end
