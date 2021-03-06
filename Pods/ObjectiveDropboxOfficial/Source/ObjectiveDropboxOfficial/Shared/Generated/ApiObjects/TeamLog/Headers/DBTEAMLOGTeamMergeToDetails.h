///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTeamMergeToDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMergeToDetails` struct.
///
/// Merged this team into another team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMergeToDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The name of the team that this team was merged into.
@property (nonatomic, readonly, copy) NSString *teamName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamName The name of the team that this team was merged into.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamName:(NSString *)teamName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamMergeToDetails` struct.
///
@interface DBTEAMLOGTeamMergeToDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMergeToDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGTeamMergeToDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeToDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGTeamMergeToDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamMergeToDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeToDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGTeamMergeToDetails` object.
///
+ (DBTEAMLOGTeamMergeToDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
