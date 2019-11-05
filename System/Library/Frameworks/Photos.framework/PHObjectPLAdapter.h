/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHFetchDictionaryAccessing.h>
#import <Photos/PHMutableFetchDictionaryAccessing.h>

@class PHPhotoLibrary, PLManagedObject, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface PHObjectPLAdapter : NSObject <PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing> {

	PHPhotoLibrary* _photoLibrary;
	PLManagedObject* _backingManagedObject;
	NSMutableOrderedSet* _ignoredKeys;
	NSMutableDictionary* _modifiedKeyValues;

}

@property (nonatomic,readonly) PLManagedObject * backingManagedObject;              //@synthesize backingManagedObject=_backingManagedObject - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * ignoredKeys;                     //@synthesize ignoredKeys=_ignoredKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifiedKeyValues;               //@synthesize modifiedKeyValues=_modifiedKeyValues - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(PHPhotoLibrary *)photoLibrary;
-(id)objectWithPropertySets:(id)arg1 ;
-(id)mutableAccessingCopy;
-(id)initWithPLManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(PLManagedObject *)backingManagedObject;
-(NSMutableOrderedSet *)ignoredKeys;
-(void)setIgnoredKeys:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)modifiedKeyValues;
-(void)setModifiedKeyValues:(NSMutableDictionary *)arg1 ;
@end

