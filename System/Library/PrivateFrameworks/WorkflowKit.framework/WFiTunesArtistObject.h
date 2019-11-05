/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFiTunesObject.h>
#import <WorkflowKit/MTLJSONSerializing.h>

@class NSString, NSDictionary;

@interface WFiTunesArtistObject : WFiTunesObject <MTLJSONSerializing> {

	NSString* _type;
	NSString* _genre;

}

@property (nonatomic,readonly) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * genre;                                 //@synthesize genre=_genre - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
-(NSString *)type;
-(NSString *)genre;
@end

