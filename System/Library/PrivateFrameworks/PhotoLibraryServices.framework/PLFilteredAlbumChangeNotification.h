/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource.h>
#import <PhotoLibraryServices/PLDerivedNotification.h>

@class PLFilteredAlbum, NSIndexSet, PLIndexMapper, PLAssetContainerChangeNotification, NSString;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification> {

	PLFilteredAlbum* _album;
	NSIndexSet* _oldFilteredIndexes;
	NSIndexSet* _filteredIndexes;
	PLIndexMapper* _indexMapper;
	PLAssetContainerChangeNotification* _backingNotification;

}

@property (nonatomic,retain,readonly) NSIndexSet * updatedFilteredIndexes; 
@property (nonatomic,copy) NSIndexSet * filteredIndexes; 
@property (nonatomic,retain,readonly) PLIndexMapper * indexMapper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(NSString *)description;
-(id)init;
-(id)object;
-(id)_changedObjects;
-(id)album;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(NSIndexSet *)filteredIndexes;
-(PLIndexMapper *)indexMapper;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3 ;
-(BOOL)shouldReload;
-(BOOL)countDidChange;
-(id)_diffDescription;
-(NSIndexSet *)updatedFilteredIndexes;
-(void)setFilteredIndexes:(NSIndexSet *)arg1 ;
@end

