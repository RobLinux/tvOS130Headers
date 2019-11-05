/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MSUUpdateBrainLoader : NSObject {

	NSDictionary* _attributesDict;

}

@property (retain) NSDictionary * attributesDict;              //@synthesize attributesDict=_attributesDict - In the implementation block
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)cancel:(id*)arg1 ;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(NSDictionary *)attributesDict;
-(void)setAttributesDict:(NSDictionary *)arg1 ;
@end

