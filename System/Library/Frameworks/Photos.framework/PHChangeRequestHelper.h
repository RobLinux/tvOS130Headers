/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLClientAuthorization, PHChangeRequest;
@class NSMutableDictionary, NSMutableSet, PHPerformChangesRequest, NSString, NSManagedObjectID, NSError;

@interface PHChangeRequestHelper : NSObject {

	BOOL _isMutated;
	BOOL _isNewRequest;
	NSMutableDictionary* _mutations;
	NSMutableSet* _nilMutations;
	id<PLClientAuthorization> _clientAuthorization;
	id<PHChangeRequest> _changeRequest;
	PHPerformChangesRequest* _request;
	NSString* _uuid;
	NSString* _uuidSaveToken;
	NSManagedObjectID* _objectID;
	NSError* _placeholderRequestError;

}

@property (nonatomic,readonly) NSError * placeholderRequestError;                        //@synthesize placeholderRequestError=_placeholderRequestError - In the implementation block
@property (assign,nonatomic,__weak) id<PHChangeRequest> changeRequest;                   //@synthesize changeRequest=_changeRequest - In the implementation block
@property (assign,nonatomic) PHPerformChangesRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * uuidSaveToken;                                 //@synthesize uuidSaveToken=_uuidSaveToken - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                               //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutations;                          //@synthesize mutations=_mutations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * nilMutations;                              //@synthesize nilMutations=_nilMutations - In the implementation block
@property (assign,getter=isNewRequest,nonatomic) BOOL newRequest; 
@property (assign,getter=isMutated,nonatomic) BOOL mutated; 
@property (nonatomic,readonly) NSString * clientName; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
+(id)changeRequestForObject:(id)arg1 ;
+(id)changeRequestWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)description;
-(id)init;
-(PHPerformChangesRequest *)request;
-(void)setRequest:(PHPerformChangesRequest *)arg1 ;
-(NSMutableDictionary *)mutations;
-(NSString *)uuid;
-(NSManagedObjectID *)objectID;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(NSString *)clientName;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutated;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(BOOL)isClientEntitled;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)isNewRequest;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3 ;
-(id)initForNewObjectWithChangeRequest:(id)arg1 ;
-(id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 request:(id)arg3 clientAuthorization:(id)arg4 ;
-(id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2 ;
-(BOOL)_generateUUIDIfNecessary:(id*)arg1 ;
-(BOOL)_validateOrGenerateUUIDWithClientEntitled:(BOOL)arg1 request:(id)arg2 changeRequest:(id)arg3 ;
-(void)didMutate;
-(void)setMutated:(BOOL)arg1 ;
-(void)setNewRequest:(BOOL)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(NSMutableSet *)nilMutations;
-(id<PHChangeRequest>)changeRequest;
-(void)setChangeRequest:(id<PHChangeRequest>)arg1 ;
-(NSString *)uuidSaveToken;
-(NSError *)placeholderRequestError;
@end

