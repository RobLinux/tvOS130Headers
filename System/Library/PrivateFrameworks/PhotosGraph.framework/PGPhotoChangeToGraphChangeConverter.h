/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PGPhotoChangeToGraphChangeConverter : NSObject {

	NSMutableDictionary* _entityTranslatorByEntityName;

}

@property (nonatomic,retain) NSMutableDictionary * entityTranslatorByEntityName;              //@synthesize entityTranslatorByEntityName=_entityTranslatorByEntityName - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)_registerTranslatorsWithPhotoLibrary:(id)arg1 ;
-(id)graphChangesWithPhotoChange:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)entityTranslatorByEntityName;
-(void)setEntityTranslatorByEntityName:(NSMutableDictionary *)arg1 ;
@end

