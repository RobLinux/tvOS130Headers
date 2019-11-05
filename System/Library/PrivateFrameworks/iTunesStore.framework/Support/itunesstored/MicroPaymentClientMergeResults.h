/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOrderedSet;

@interface MicroPaymentClientMergeResults : NSObject {

	NSArray* _addedPayments;
	NSArray* _changedPayments;
	NSOrderedSet* _removedDownloadIDs;
	NSArray* _removedPayments;

}

@property (nonatomic,readonly) BOOL didChange; 
@property (nonatomic,copy) NSArray * addedPayments;                        //@synthesize addedPayments=_addedPayments - In the implementation block
@property (nonatomic,copy) NSArray * changedPayments;                      //@synthesize changedPayments=_changedPayments - In the implementation block
@property (nonatomic,copy) NSOrderedSet * removedDownloadIDs;              //@synthesize removedDownloadIDs=_removedDownloadIDs - In the implementation block
@property (nonatomic,copy) NSArray * removedPayments;                      //@synthesize removedPayments=_removedPayments - In the implementation block
-(void)dealloc;
-(BOOL)didChange;
-(NSOrderedSet *)removedDownloadIDs;
-(void)setAddedPayments:(NSArray *)arg1 ;
-(void)setChangedPayments:(NSArray *)arg1 ;
-(void)setRemovedDownloadIDs:(NSOrderedSet *)arg1 ;
-(void)setRemovedPayments:(NSArray *)arg1 ;
-(NSArray *)addedPayments;
-(NSArray *)changedPayments;
-(NSArray *)removedPayments;
@end

