/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MPModelObject;

@interface MPStoreItemLibraryImport : NSObject {

	BOOL _addToCloudLibrary;
	NSArray* _importElements;
	MPModelObject* _referralObject;

}

@property (nonatomic,readonly) NSArray * importElements;                    //@synthesize importElements=_importElements - In the implementation block
@property (nonatomic,readonly) BOOL addToCloudLibrary;                      //@synthesize addToCloudLibrary=_addToCloudLibrary - In the implementation block
@property (nonatomic,readonly) MPModelObject * referralObject;              //@synthesize referralObject=_referralObject - In the implementation block
-(MPModelObject *)referralObject;
-(NSArray *)importElements;
-(id)initWithImportElements:(id)arg1 usingCloudLibraryDestination:(BOOL)arg2 ;
-(id)initWithImportElements:(id)arg1 referralObject:(id)arg2 usingCloudLibraryDestination:(BOOL)arg3 ;
-(BOOL)addToCloudLibrary;
@end

