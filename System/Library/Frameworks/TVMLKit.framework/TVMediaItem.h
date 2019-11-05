/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TVSecureKeyLoader, NSString, NSURL, NSNumber, NSArray, NSDictionary;

@interface TVMediaItem : NSObject {

	BOOL _containsExplicitContent;
	_TVSecureKeyLoader* secureKeyLoader;
	NSString* _type;
	NSURL* _url;
	NSString* _title;
	NSString* _subtitle;
	NSString* _itemDescription;
	NSString* _contentRatingDomain;
	NSNumber* _contentRatingRanking;
	NSURL* _artworkImageURL;
	double _resumeTime;
	NSArray* _interstitials;
	NSArray* _highlightGroups;
	NSDictionary* _userInfo;
	NSString* _contentRating;
	double _contentProposalPresentationTime;
	double _contentProposalAutomaticAcceptanceInterval;
	double _playbackProgress;
	NSString* _externalIdentifier;
	NSString* _externalProfileIdentifier;
	NSString* _externalServiceIdentifier;

}

@property (nonatomic,retain) _TVSecureKeyLoader * secureKeyLoader; 
@property (nonatomic,retain) NSString * type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * itemDescription;                                     //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,retain) NSString * contentRatingDomain;                                 //@synthesize contentRatingDomain=_contentRatingDomain - In the implementation block
@property (nonatomic,retain) NSNumber * contentRatingRanking;                                //@synthesize contentRatingRanking=_contentRatingRanking - In the implementation block
@property (nonatomic,retain) NSURL * artworkImageURL;                                        //@synthesize artworkImageURL=_artworkImageURL - In the implementation block
@property (assign,nonatomic) BOOL containsExplicitContent;                                   //@synthesize containsExplicitContent=_containsExplicitContent - In the implementation block
@property (assign,nonatomic) double resumeTime;                                              //@synthesize resumeTime=_resumeTime - In the implementation block
@property (nonatomic,retain) NSArray * interstitials;                                        //@synthesize interstitials=_interstitials - In the implementation block
@property (nonatomic,retain) NSArray * highlightGroups;                                      //@synthesize highlightGroups=_highlightGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * contentRating;                                         //@synthesize contentRating=_contentRating - In the implementation block
@property (assign,nonatomic) double contentProposalPresentationTime;                         //@synthesize contentProposalPresentationTime=_contentProposalPresentationTime - In the implementation block
@property (assign,nonatomic) double contentProposalAutomaticAcceptanceInterval;              //@synthesize contentProposalAutomaticAcceptanceInterval=_contentProposalAutomaticAcceptanceInterval - In the implementation block
@property (assign,nonatomic) double playbackProgress;                                        //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,copy) NSString * externalIdentifier;                                    //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,copy) NSString * externalProfileIdentifier;                             //@synthesize externalProfileIdentifier=_externalProfileIdentifier - In the implementation block
@property (nonatomic,copy) NSString * externalServiceIdentifier;                             //@synthesize externalServiceIdentifier=_externalServiceIdentifier - In the implementation block
+(id)_metadataItemForIdentifier:(id)arg1 value:(id)arg2 ;
+(id)_imageDataForImage:(id)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setPlaybackProgress:(double)arg1 ;
-(double)playbackProgress;
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(void)setContentRatingRanking:(NSNumber *)arg1 ;
-(NSNumber *)contentRatingRanking;
-(void)setArtworkImageURL:(NSURL *)arg1 ;
-(NSURL *)artworkImageURL;
-(void)setResumeTime:(double)arg1 ;
-(double)resumeTime;
-(void)setContentRatingDomain:(NSString *)arg1 ;
-(NSString *)contentRatingDomain;
-(void)setContentProposalAutomaticAcceptanceInterval:(double)arg1 ;
-(double)contentProposalAutomaticAcceptanceInterval;
-(void)setContentProposalPresentationTime:(double)arg1 ;
-(double)contentProposalPresentationTime;
-(NSArray *)highlightGroups;
-(void)setHighlightGroups:(NSArray *)arg1 ;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setSecureKeyLoader:(_TVSecureKeyLoader *)arg1 ;
-(_TVSecureKeyLoader *)secureKeyLoader;
-(void)setContainsExplicitContent:(BOOL)arg1 ;
-(void)setExternalProfileIdentifier:(NSString *)arg1 ;
-(void)setExternalServiceIdentifier:(NSString *)arg1 ;
-(BOOL)containsExplicitContent;
-(NSString *)externalProfileIdentifier;
-(NSString *)externalServiceIdentifier;
-(void)updatePlayerItem:(id)arg1 ;
@end

