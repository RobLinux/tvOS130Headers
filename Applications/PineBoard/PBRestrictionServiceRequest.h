/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSNumber, NSString;

@interface PBRestrictionServiceRequest : NSObject {

	BOOL _allowInteraction;
	NSUUID* _token;
	unsigned long long _requestType;
	unsigned long long _restrictionContentType;
	unsigned long long _restrictedSettingType;
	NSNumber* _rating;
	/*^block*/id _serviceRequestCompletionBlock;
	/*^block*/id _resultHandler;
	NSString* _PIN;

}

@property (nonatomic,readonly) NSUUID * token;                                       //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;                       //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long restrictionContentType;              //@synthesize restrictionContentType=_restrictionContentType - In the implementation block
@property (assign,nonatomic) unsigned long long restrictedSettingType;               //@synthesize restrictedSettingType=_restrictedSettingType - In the implementation block
@property (nonatomic,copy) NSNumber * rating;                                        //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) BOOL allowInteraction;                                  //@synthesize allowInteraction=_allowInteraction - In the implementation block
@property (nonatomic,copy) id serviceRequestCompletionBlock;                         //@synthesize serviceRequestCompletionBlock=_serviceRequestCompletionBlock - In the implementation block
@property (nonatomic,copy) id resultHandler;                                         //@synthesize resultHandler=_resultHandler - In the implementation block
@property (nonatomic,copy) NSString * PIN;                                           //@synthesize PIN=_PIN - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSUUID *)token;
-(id)initWithToken:(id)arg1 ;
-(unsigned long long)requestType;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
-(void)setPIN:(NSString *)arg1 ;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(NSString *)PIN;
-(id)initWithToken:(id)arg1 requestType:(unsigned long long)arg2 ;
-(unsigned long long)restrictionContentType;
-(void)setRestrictionContentType:(unsigned long long)arg1 ;
-(unsigned long long)restrictedSettingType;
-(void)setRestrictedSettingType:(unsigned long long)arg1 ;
-(BOOL)allowInteraction;
-(void)setAllowInteraction:(BOOL)arg1 ;
-(id)serviceRequestCompletionBlock;
-(void)setServiceRequestCompletionBlock:(id)arg1 ;
@end
