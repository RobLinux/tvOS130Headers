/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCloudKitMirroringImportRequest.h>

@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest {

	NSArray* _objectIDsToFetch;
	NSDictionary* _entityNameToAttributesToFetch;
	NSDictionary* _entityNameToAttributeNamesToFetch;
	BOOL _editable;

}

@property (nonatomic,copy) NSArray * objectIDsToFetch;                                         //@synthesize objectIDsToFetch=_objectIDsToFetch - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * entityNameToAttributesToFetch; 
-(void)dealloc;
-(BOOL)_isEditable;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)throwNotEditable:(SEL)arg1 ;
-(BOOL)validateForUseWithStore:(id)arg1 error:(id*)arg2 ;
-(id)_entityNameToAttributeNamesToFetch;
-(NSDictionary *)entityNameToAttributesToFetch;
-(void)setEntityNameToAttributesToFetch:(NSDictionary *)arg1 ;
-(void)setEntityNameToAttributeNamesToFetch:(id)arg1 ;
-(void)setObjectIDsToFetch:(NSArray *)arg1 ;
-(NSArray *)objectIDsToFetch;
@end

