/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFiTunesStoreObject.h>
#import <WorkflowKit/MTLJSONSerializing.h>

@class NSURL, NSString, WFTimeInterval, NSDictionary;

@interface WFiTunesMediaTrackObject : WFiTunesStoreObject <MTLJSONSerializing> {

	BOOL _streamable;
	BOOL _explicit;
	NSURL* _previewURL;
	NSString* _genre;
	WFTimeInterval* _duration;

}

@property (nonatomic,readonly) NSURL * previewURL;                               //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,readonly) NSString * genre;                                 //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) WFTimeInterval * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL streamable;                                  //@synthesize streamable=_streamable - In the implementation block
@property (nonatomic,readonly) BOOL explicit;                                    //@synthesize explicit=_explicit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)durationJSONTransformer;
+(id)explicitJSONTransformer;
+(id)priceJSONTransformer;
-(WFTimeInterval *)duration;
-(NSString *)genre;
-(BOOL)explicit;
-(NSURL *)previewURL;
-(BOOL)streamable;
@end

