/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol INAnswerCallIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (assign,nonatomic) long long statusCode; 
@property (nonatomic,copy) NSArray * callRecords; 
@required
-(long long)code;
-(long long)statusCode;
-(void)setStatusCode:(long long)arg1;
-(NSArray *)callRecords;
-(void)setCallRecords:(id)arg1;

@end

