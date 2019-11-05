/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFiTunesCollectionObject.h>
#import <WorkflowKit/MTLJSONSerializing.h>

@class NSString, NSDictionary;

@interface WFiTunesPodcastObject : WFiTunesCollectionObject <MTLJSONSerializing> {

	NSString* _podcastUUID;

}

@property (nonatomic,copy) NSString * podcastUUID;                               //@synthesize podcastUUID=_podcastUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
-(id)podcastQueryDictionary;
-(id)initWithName:(id)arg1 identifier:(id)arg2 podcastUUID:(id)arg3 kind:(id)arg4 ;
-(NSString *)podcastUUID;
-(void)setPodcastUUID:(NSString *)arg1 ;
@end

