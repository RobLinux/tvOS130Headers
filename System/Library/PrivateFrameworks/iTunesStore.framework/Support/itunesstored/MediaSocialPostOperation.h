/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSArray, NSString;

@interface MediaSocialPostOperation : ISOperation {

	NSNumber* _accountID;
	NSArray* _attachments;
	NSString* _authorID;
	NSString* _authorType;
	NSArray* _contentItems;
	double _createTime;
	NSArray* _externalServiceDestinations;
	BOOL _isAttributed;
	long long _postIdentifier;
	/*^block*/id _resultBlock;
	NSString* _text;
	NSString* _userAgent;
	long long _postID;

}

@property (copy) id resultBlock; 
@property (assign,nonatomic) long long postID;              //@synthesize postID=_postID - In the implementation block
@property (copy) NSString * userAgent; 
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)initWithPostDescription:(id)arg1 ;
-(id)_requestBodyDictionary;
-(long long)postID;
-(id)initWithPostEntity:(id)arg1 ;
-(id)_attachmentDictionaryWithAttachment:(id)arg1 ;
-(id)_targetDictionaryWithContentItem:(id)arg1 ;
-(id)_externalServiceDictionaryWithDestination:(id)arg1 ;
-(void)setPostID:(long long)arg1 ;
@end

