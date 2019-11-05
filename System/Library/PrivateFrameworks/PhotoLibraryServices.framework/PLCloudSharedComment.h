/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, PLCloudFeedCommentsEntry;

@interface PLCloudSharedComment : PLManagedObject

@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSString * commenterHashedPersonID; 
@property (nonatomic,retain) NSNumber * isDeletable; 
@property (nonatomic,retain) NSNumber * isLike; 
@property (nonatomic,retain) NSNumber * isCaption; 
@property (nonatomic,retain) NSNumber * isBatchComment; 
@property (nonatomic,retain) NSNumber * isMyComment; 
@property (nonatomic,retain) NSString * commentText; 
@property (nonatomic,retain) NSDate * commentDate; 
@property (nonatomic,retain) NSDate * commentClientDate; 
@property (nonatomic,retain) PLManagedAsset * commentedAsset; 
@property (nonatomic,retain) PLManagedAsset * likedAsset; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedCommentEntry; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedLikeCommentEntry; 
@property (nonatomic,readonly) BOOL isLikeBoolValue; 
@property (nonatomic,__weak,readonly) NSString * commenterEmail; 
@property (nonatomic,__weak,readonly) NSString * commenterFirstName; 
@property (nonatomic,__weak,readonly) NSString * commenterLastName; 
@property (nonatomic,__weak,readonly) NSString * commenterFullName; 
@property (nonatomic,__weak,readonly) PLCloudFeedCommentsEntry * cloudFeedEntry; 
@property (nonatomic,retain) NSString * commentType; 
+(id)entityName;
+(id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(BOOL)arg4 isMyComment:(BOOL)arg5 inLibrary:(id)arg6 ;
+(id)cloudSharedCommentWithGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2 ;
-(id)init;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(id)asset;
-(PLCloudFeedCommentsEntry *)cloudFeedEntry;
-(BOOL)isLikeBoolValue;
-(BOOL)_isInterestingToUser;
-(BOOL)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg1 asCaptionOnly:(BOOL*)arg2 ;
-(BOOL)isInterestingForAlbumsSorting;
-(id)commenterDisplayName;
-(BOOL)canBeDeletedByUser;
-(NSString *)commenterEmail;
-(NSString *)commenterFirstName;
-(NSString *)commenterLastName;
-(NSString *)commenterFullName;
@end

