/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <ActionKit/WFNaming.h>
#import <ActionKit/WFSerializableContent.h>
#import <ActionKit/MTLJSONSerializing.h>

@class NSString, NSURL, NSDictionary;

@interface WFGiphyObject : MTLModel <WFNaming, WFSerializableContent, MTLJSONSerializing> {

	NSString* _objectId;
	NSString* _type;
	NSString* _caption;
	NSURL* _url;
	NSDictionary* _images;

}

@property (nonatomic,copy,readonly) NSString * objectId;                         //@synthesize objectId=_objectId - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * caption;                          //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * images;                       //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)urlJSONTransformer;
+(id)imagesJSONTransformer;
+(id)captionJSONTransformer;
-(NSString *)type;
-(NSURL *)url;
-(NSDictionary *)images;
-(id)originalImage;
-(NSString *)caption;
-(NSString *)objectId;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)smallestImage;
@end

