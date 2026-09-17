
this is week 1 PR files changes section:
‎application/tests/harvester_test/fixtures/duplicate_include_paths.yaml‎
+22
Lines changed: 22 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: duplicate-includes
    type: github
    enabled: true
    owner: OWASP
    repo: ASVS
    branch: master
    paths:
      include:
        - "docs/**/*.md"
        - "docs/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/duplicate_repo_ids.yaml‎
+34
Lines changed: 34 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: asvs
    type: github
    owner: OWASP
    repo: ASVS
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
  - id: asvs
    type: github
    owner: OWASP
    repo: CheatSheetSeries
    paths:
      include:
        - "cheatsheets/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/duplicate_repo_ids_case.yaml‎
+34
Lines changed: 34 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: asvs
    type: github
    owner: OWASP
    repo: ASVS
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
  - id: ASVS
    type: github
    owner: OWASP
    repo: CheatSheetSeries
    paths:
      include:
        - "cheatsheets/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/duplicate_repositories.yaml‎
+34
Lines changed: 34 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: asvs-1
    type: github
    owner: OWASP
    repo: ASVS
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
  - id: asvs-2
    type: github
    owner: OWASP
    repo: ASVS
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/duplicate_repositories_case.yaml‎
+34
Lines changed: 34 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: asvs-1
    type: github
    owner: OWASP
    repo: ASVS
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
  - id: asvs-2
    type: github
    owner: owasp
    repo: asvs
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/empty_include_paths.yaml‎
+16
Lines changed: 16 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: asvs
    type: github
    owner: OWASP
    repo: ASVS
    paths:
      include: []
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/empty_owner.yaml‎
+21
Lines changed: 21 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: empty-owner
    type: github
    enabled: true
    owner: ""
    repo: ASVS
    branch: master
    paths:
      include:
        - "docs/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/invalid_chunk_size.yaml‎
+18
Lines changed: 18 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: owasp-asvs
    type: github
    owner: OWASP
    repo: ASVS
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 0
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/invalid_chunking_strategy.yaml‎
+21
Lines changed: 21 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: invalid-strategy
    type: github
    enabled: true
    owner: OWASP
    repo: ASVS
    branch: master
    paths:
      include:
        - "docs/**/*.md"
    chunking:
      strategy: invalid_strategy
      max_tokens: 1200
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/invalid_missing_id.yaml‎
+17
Lines changed: 17 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - type: github
    owner: OWASP
    repo: ASVS
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/invalid_overlap_tokens.yaml‎
+16
Lines changed: 16 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: invalid-overlap
    type: github
    owner: OWASP
    repo: ASVS
    branch: master
    paths:
      include:
        - "docs/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 100
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/invalid_polling_interval.yaml‎
+17
Lines changed: 17 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: asvs
    type: github
    owner: OWASP
    repo: ASVS
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 0
‎application/tests/harvester_test/fixtures/invalid_polling_mode.yaml‎
+21
Lines changed: 21 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: invalid-polling
    type: github
    enabled: true
    owner: OWASP
    repo: ASVS
    branch: master
    paths:
      include:
        - "docs/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
      overlap_tokens: 100
    polling:
      mode: realtime
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/invalid_yaml.yaml‎
+4
Lines changed: 4 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: broken
    paths:
      include: [unclosed
‎application/tests/harvester_test/fixtures/valid_repos.yaml‎
+16
Lines changed: 16 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: owasp-asvs
    type: github
    owner: OWASP
    repo: ASVS
    paths:
      include:
        - "4.0/en/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/whitespace_branch.yaml‎
+16
Lines changed: 16 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: whitespace-branch
    type: github
    owner: OWASP
    repo: ASVS
    branch: " "
    paths:
      include:
        - "docs/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/whitespace_id.yaml‎
+16
Lines changed: 16 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: " "
    type: github
    owner: OWASP
    repo: ASVS
    branch: master
    paths:
      include:
        - "docs/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/whitespace_owner.yaml‎
+16
Lines changed: 16 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: whitespace-owner
    type: github
    owner: " "
    repo: ASVS
    branch: master
    paths:
      include:
        - "docs/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/fixtures/whitespace_repo.yaml‎
+16
Lines changed: 16 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: whitespace-repo
    type: github
    owner: OWASP
    repo: " "
    branch: master
    paths:
      include:
        - "docs/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 60
‎application/tests/harvester_test/__init__.py‎
+3
Lines changed: 3 additions & 0 deletions
Original file line number	Diff line number	Diff line change
"""
tests for Module A configuration layer (empty for now)
"""
‎application/tests/harvester_test/config_loader_test.py‎
+122
Lines changed: 122 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from pathlib import Path
import unittest
from application.utils.harvester.config_loader import (
    ConfigLoaderError,
    ConfigFileNotFoundError,
    load_repo_config,
)
FIXTURES_DIR = Path(__file__).parent / "fixtures"
class ConfigLoaderTests(unittest.TestCase):
    def test_load_valid_config(self):
        config_path = FIXTURES_DIR / "valid_repos.yaml"
        config = load_repo_config(config_path)
        self.assertEqual(len(config.repositories), 1)
        repo = config.repositories[0]
        self.assertEqual(repo.id, "owasp-asvs")
        self.assertEqual(repo.owner, "OWASP")
        self.assertEqual(repo.repo, "ASVS")
    def test_missing_repository_id(self):
        config_path = FIXTURES_DIR / "invalid_missing_id.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
    def test_invalid_chunk_size(self):
        config_path = FIXTURES_DIR / "invalid_chunk_size.yaml"
        with self.assertRaisesRegex(ConfigLoaderError, "max_tokens"):
            load_repo_config(config_path)
    def test_invalid_yaml_syntax(self):
        config_path = FIXTURES_DIR / "invalid_yaml.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
    def test_missing_config_file(self):
        with self.assertRaises(ConfigFileNotFoundError):
            load_repo_config("does_not_exist.yaml")
    def test_invalid_polling_interval(self):
        config_path = FIXTURES_DIR / "invalid_polling_interval.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
    def test_empty_include_paths(self):
        config_path = FIXTURES_DIR / "empty_include_paths.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
Comment on line R59
Resolved
    def test_whitespace_only_repository_id(self):
        config_path = FIXTURES_DIR / "whitespace_id.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
    def test_whitespace_only_owner(self):
        config_path = FIXTURES_DIR / "whitespace_owner.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
    def test_whitespace_only_repo(self):
        config_path = FIXTURES_DIR / "whitespace_repo.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
    def test_whitespace_only_branch(self):
        config_path = FIXTURES_DIR / "whitespace_branch.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
    def test_overlap_tokens_must_be_less_than_max_tokens(self):
        config_path = FIXTURES_DIR / "invalid_overlap_tokens.yaml"
        with self.assertRaisesRegex(ConfigLoaderError, "overlap_tokens"):
            load_repo_config(config_path)
    def test_load_packaged_repos_yaml(self):
        config_path = (
            Path(__file__).resolve().parents[2] / "utils" / "harvester" / "repos.yaml"
        )
        config = load_repo_config(config_path)
        self.assertEqual(len(config.repositories), 2)
        self.assertEqual(config.repositories[0].id, "owasp-asvs")
        self.assertEqual(config.repositories[1].id, "owasp-cheatsheets")
    def test_empty_owner(self):
        config_path = FIXTURES_DIR / "empty_owner.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
    def test_invalid_chunking_strategy(self):
        config_path = FIXTURES_DIR / "invalid_chunking_strategy.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
    def test_invalid_polling_mode(self):
        config_path = FIXTURES_DIR / "invalid_polling_mode.yaml"
        with self.assertRaises(ConfigLoaderError):
            load_repo_config(config_path)
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/repos_validator_test.py‎
+80
Lines changed: 80 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from pathlib import Path
import unittest
from application.utils.harvester.config_loader import (
    load_repo_config,
)
from application.utils.harvester.repos_validator import (
    RepositoryValidationError,
    validate_repositories,
)
FIXTURES_DIR = Path(__file__).parent / "fixtures"
class ReposValidatorTests(unittest.TestCase):
    def test_duplicate_repository_ids(self):
        config_path = FIXTURES_DIR / "duplicate_repo_ids.yaml"
        config = load_repo_config(config_path)
        with self.assertRaisesRegex(
            RepositoryValidationError,
            "Duplicate repository id",
        ):
            validate_repositories(config)
    def test_duplicate_repositories(self):
        config_path = FIXTURES_DIR / "duplicate_repositories.yaml"
        config = load_repo_config(config_path)
        with self.assertRaisesRegex(
            RepositoryValidationError,
            "Duplicate repository detected",
        ):
            validate_repositories(config)
    def test_duplicate_include_paths(self):
        config_path = FIXTURES_DIR / "duplicate_include_paths.yaml"
        config = load_repo_config(config_path)
        with self.assertRaisesRegex(
            RepositoryValidationError,
            "duplicate include paths",
        ):
            validate_repositories(config)
    def test_validate_valid_repositories(self):
        config_path = FIXTURES_DIR / "valid_repos.yaml"
        config = load_repo_config(config_path)
        validate_repositories(config)
    def test_duplicate_repository_ids_case_insensitive(self):
        config_path = FIXTURES_DIR / "duplicate_repo_ids_case.yaml"
        config = load_repo_config(config_path)
        with self.assertRaisesRegex(
            RepositoryValidationError,
            "Duplicate repository id",
        ):
            validate_repositories(config)
    def test_duplicate_repositories_case_insensitive(self):
        config_path = FIXTURES_DIR / "duplicate_repositories_case.yaml"
        config = load_repo_config(config_path)
        with self.assertRaisesRegex(
            RepositoryValidationError,
            "Duplicate repository detected",
        ):
            validate_repositories(config)
if __name__ == "__main__":
    unittest.main()
‎application/utils/harvester/__init__.py‎
+27
Lines changed: 27 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from .config_loader import (
    ConfigLoaderError,
    load_repo_config,
)
from .repos_validator import (
    RepositoryValidationError,
    validate_repositories,
)
from .schemas import (
    ChunkingConfig,
    PathRules,
    PollingConfig,
    RepositoryConfig,
    ReposFile,
)
__all__ = [
    "ChunkingConfig",
    "ConfigLoaderError",
    "PathRules",
    "PollingConfig",
    "RepositoryConfig",
    "RepositoryValidationError",
    "ReposFile",
    "load_repo_config",
    "validate_repositories",
]
Comment on lines R17 to R27
Resolved
‎application/utils/harvester/config_loader.py‎
+32
Lines changed: 32 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from pathlib import Path
import yaml
from pydantic import ValidationError
from .schemas import ReposFile
class ConfigLoaderError(Exception):
    """Base class for configuration loading errors."""
class ConfigFileNotFoundError(ConfigLoaderError):
    """Raised when the configuration file cannot be found."""
def load_repo_config(path: str | Path) -> ReposFile:
    config_path = Path(path)
    if not config_path.is_file():
        raise ConfigFileNotFoundError(f"Configuration file not found: {config_path}")
    try:
        with config_path.open("r", encoding="utf-8") as file:
            raw_config = yaml.safe_load(file)
    except yaml.YAMLError as exc:
        raise ConfigLoaderError(f"Invalid YAML syntax in {config_path}") from exc
    try:
        return ReposFile.model_validate(raw_config)
    except ValidationError as exc:
        raise ConfigLoaderError(
            f"Schema validation failed for {config_path}: {exc}"
        ) from exc
‎application/utils/harvester/exclude_patterns.txt‎
+18
Lines changed: 18 additions & 0 deletions
Comment on file
Resolved
Comment on file
Resolved
Original file line number	Diff line number	Diff line change
# Placeholder for repository-level exclude patterns.
# This file will be consumed by the Week 4 noise-reduction pipeline
# to filter non-documentation files during harvesting.
**/.git/*
**/node_modules/**
**/__pycache__/**
**/.claude/**
**/.cursor/**
**/*.png
**/*.jpg
**/*.jpeg
**/*.svg
**/*.gif
**/*.pdf
**/archive/**
‎application/utils/harvester/repos.yaml‎
+43
Lines changed: 43 additions & 0 deletions
Original file line number	Diff line number	Diff line change
repositories:
  - id: owasp-asvs
    type: github
    enabled: true
    owner: OWASP
    repo: ASVS
    branch: master
    paths:
      include:
        - "4.0/en/**/*.md"
      exclude:
        - "**/archive/**"
    chunking:
      strategy: markdown_heading
      max_tokens: 1200
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 60
  - id: owasp-cheatsheets
    type: github
    enabled: true
    owner: OWASP
    repo: CheatSheetSeries
    branch: master
    paths:
      include:
        - "cheatsheets/**/*.md"
    chunking:
      strategy: markdown_heading
      max_tokens: 1000
      overlap_tokens: 100
    polling:
      mode: incremental
      interval_minutes: 120
‎application/utils/harvester/repos_validator.py‎
+33
Lines changed: 33 additions & 0 deletions
Original file line number	Diff line number	Diff line change
# as the name suggests
from .schemas import ReposFile
class RepositoryValidationError(Exception):
    """Raised when repository configuration fails semantic validation."""
def validate_repositories(config: ReposFile) -> None:
    seen_ids: set[str] = set()
    seen_repositories: set[tuple[str, str]] = set()
    for repository in config.repositories:
        repo_id_key = repository.id.casefold()
        if repo_id_key in seen_ids:
            raise RepositoryValidationError(
                f"Duplicate repository id found: {repository.id}"
            )
        seen_ids.add(repo_id_key)
        repository_key = (
            repository.owner.casefold(),
            repository.repo.casefold(),
        )
        if repository_key in seen_repositories:
            raise RepositoryValidationError(
                f"Duplicate repository detected: {repository.owner}/{repository.repo}"
            )
        seen_repositories.add(repository_key)
        include_patterns = set(repository.paths.include)
        if len(include_patterns) != len(repository.paths.include):
            raise RepositoryValidationError(
                f"Repository '{repository.id}' has duplicate include paths"
            )
‎application/utils/harvester/schemas.py‎
+104
Lines changed: 104 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from typing import Literal
from pydantic import BaseModel, Field, ConfigDict, model_validator
# this will control which repo paths are included and excluded during ingestions
class PathRules(BaseModel):
    model_config = ConfigDict(extra="forbid")
    include: list[str] = Field(
        ...,
        min_length=1,
        description="Glob patterns to include during ingestions",
    )
    exclude: list[str] = Field(
        default_factory=list, description="Glob patterns to exclude during ingestions"
    )
# this will define how the harvested data should be chunked before downstream
class ChunkingConfig(BaseModel):
    model_config = ConfigDict(extra="forbid")
    strategy: Literal["markdown_heading", "html_readability", "fixed_size"] = Field(
        ...,
        description="Chunking strategy used for text segmentation",
    )
    max_tokens: int = Field(..., gt=0, description="max token size per chunk")
    overlap_tokens: int = Field(
        ge=0,
        default=20,
        description="token overlap between adjacent chunks",
    )
    @model_validator(mode="after")
    def overlap_must_be_less_than_max(self) -> "ChunkingConfig":
        if self.overlap_tokens >= self.max_tokens:
            raise ValueError(
                f"overlap_tokens ({self.overlap_tokens}) must be less than "
                f"max_tokens ({self.max_tokens})"
            )
        return self
# this one defines repository synchronize behaviour
class PollingConfig(BaseModel):
    model_config = ConfigDict(extra="forbid")
    mode: Literal["full", "incremental"] = Field(
        ..., description="repository sync mode"
    )
    interval_minutes: int = Field(..., gt=0, description="polling interval in minutes")
# top level repository ingestion configuration
class RepositoryConfig(BaseModel):
    model_config = ConfigDict(extra="forbid", str_strip_whitespace=True)
    id: str = Field(
        ...,
        min_length=1,
        description="unique repository identifier.",
    )
    type: Literal["github"] = Field(
        ...,
        description="repository source type.",
    )
    enabled: bool = Field(
        default=True,
        description="whether ingestion is enabled for this repository.",
    )
    owner: str = Field(
        ...,
        min_length=1,
        description="repository organization.",
    )
    repo: str = Field(
        ...,
        min_length=1,
        description="repository name.",
    )
    branch: str = Field(
        default="main",
        min_length=1,
        description="Repository branch to ingest.",
    )
    paths: PathRules
    chunking: ChunkingConfig
    polling: PollingConfig
# Root configuration object loaded from repos.yaml.
class ReposFile(BaseModel):
    model_config = ConfigDict(extra="forbid")
    repositories: list[RepositoryConfig] = Field(
        ...,
        min_length=1,
        description="List of repositories configured for ingestion.",
    )


this is week 2 PR files changes section:

‎application/tests/harvester_test/git_repository_client_integration_test.py‎
+206
Lines changed: 206 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import subprocess
import tempfile
import unittest
from pathlib import Path
import threading
from application.utils.harvester.git_repository_client import (
    GitRepositoryClient,
)
class IntegrationGitRepositoryClient(GitRepositoryClient):
    def __init__(self, *args, repository_url: str, **kwargs):
        super().__init__(*args, **kwargs)
        self._repository_url = repository_url
    @property
    def repository_url(self) -> str:
        return self._repository_url
def git(*args, cwd=None):
    subprocess.run(
        ["git", *args],
        cwd=cwd,
        check=True,
        capture_output=True,
        text=True,
    )
def git_output(*args, cwd=None):
    return subprocess.run(
        ["git", *args],
        cwd=cwd,
        check=True,
        capture_output=True,
        text=True,
    ).stdout.strip()
class GitRepositoryClientIntegrationTests(unittest.TestCase):
    def setUp(self):
        self.tempdir = tempfile.TemporaryDirectory()
        self.root = Path(self.tempdir.name)
        self.remote = self.root / "remote.git"
        self.work = self.root / "work"
        self.cache = self.root / "cache"
        git("init", "--bare", self.remote)
        git("clone", self.remote, self.work)
        git("config", "user.name", "Test User", cwd=self.work)
        git("config", "user.email", "test@example.com", cwd=self.work)
        git("checkout", "-b", "main", cwd=self.work)
        (self.work / "test.txt").write_text("v1")
        git("add", ".", cwd=self.work)
        git("commit", "-m", "initial", cwd=self.work)
        git("push", "origin", "main", cwd=self.work)
    def tearDown(self):
        self.tempdir.cleanup()
    def create_client(self):
        return IntegrationGitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
            local_path=self.cache,
            repository_url=str(self.remote),
        )
    def test_fetch_updates_worktree_and_commit(self):
        client = self.create_client()
        client.clone()
        sha1 = client.get_current_commit_sha()
        self.assertEqual(
            (client.get_local_path() / "test.txt").read_text(),
            "v1",
        )
        (self.work / "test.txt").write_text("v2")
        git("add", ".", cwd=self.work)
        git("commit", "-m", "update", cwd=self.work)
        git("push", "origin", "main", cwd=self.work)
        expected_sha = git_output(
            "rev-parse",
            "HEAD",
            cwd=self.work,
        )
        client.fetch()
        self.assertEqual(
            client.get_current_commit_sha(),
            expected_sha,
        )
        self.assertNotEqual(
            sha1,
            expected_sha,
        )
        self.assertEqual(
            (client.get_local_path() / "test.txt").read_text(),
            "v2",
        )
    def test_verify_repository_integrity_rejects_fake_git_directory(self):
        fake = self.root / "fake"
        fake.mkdir()
        (fake / ".git").mkdir()
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
            local_path=fake,
        )
        self.assertFalse(
            client.verify_repository_integrity(),
        )
    def test_verify_repository_integrity_rejects_wrong_origin(self):
        other_remote = self.root / "other.git"
        git("init", "--bare", other_remote)
        client = self.create_client()
        client.clone()
        git(
            "remote",
            "set-url",
            "origin",
            other_remote,
            cwd=client.get_local_path(),
        )
        self.assertFalse(
            client.verify_repository_integrity(),
        )
    def test_verify_repository_integrity_rejects_missing_branch(self):
        client = IntegrationGitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
            branch="dev",
            local_path=self.cache,
            repository_url=str(self.remote),
        )
        git("clone", self.remote, self.cache)
        self.assertFalse(
            client.verify_repository_integrity(),
        )
    def test_sync_serializes_clone_operations(self):
        client1 = self.create_client()
        client2 = self.create_client()
        exceptions = []
        def run_sync(client):
            try:
                client.sync()
            except Exception as exc:
                exceptions.append(exc)
        t1 = threading.Thread(target=run_sync, args=(client1,))
        t2 = threading.Thread(target=run_sync, args=(client2,))
        t1.start()
        t2.start()
        t1.join()
        t2.join()
        self.assertFalse(exceptions, f"Unexpected exceptions: {exceptions}")
        self.assertTrue(client1.verify_repository_integrity())
        self.assertTrue(client2.verify_repository_integrity())
        self.assertTrue((self.cache / ".git").exists())
        self.assertEqual(
            client1.get_current_commit_sha(),
            client2.get_current_commit_sha(),
        )
        self.assertEqual((self.cache / "test.txt").read_text(), "v1")
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/git_repository_client_test.py‎
+156
Lines changed: 156 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from unittest.mock import patch
import tempfile
from pathlib import Path
from application.utils.harvester.git_repository_client import (
    GitRepositoryClient,
)
class GitRepositoryClientTests(unittest.TestCase):
    def test_repository_url_generation(self):
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
        )
        self.assertEqual(
            client.repository_url,
            "https://github.com/OWASP/ASVS.git",
        )
    def test_local_repository_path(self):
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
        )
        self.assertEqual(
            str(client.get_local_path()),
            ".harvester_cache/owasp/asvs/main",
        )
    def test_repository_exists_locally_false(self):
        with tempfile.TemporaryDirectory() as tmpdir:
            client = GitRepositoryClient(
                owner="OWASP",
                repository="ASVS",
                local_path=Path(tmpdir) / "repo",
            )
            self.assertFalse(client.exists_locally())
    def test_verify_repository_integrity_false(self):
        with tempfile.TemporaryDirectory() as tmpdir:
            client = GitRepositoryClient(
                owner="OWASP",
                repository="ASVS",
                local_path=Path(tmpdir) / "repo",
            )
            self.assertFalse(client.verify_repository_integrity())
    def test_sync_clones_when_repository_missing(self):
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
        )
        with (
            patch.object(
                client,
                "verify_repository_integrity",
                return_value=False,
            ),
            patch.object(client, "clone") as mock_clone,
        ):
            client.sync()
        mock_clone.assert_called_once()
    def test_sync_fetches_when_repository_exists(self):
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
        )
        with (
            patch.object(
                client,
                "verify_repository_integrity",
                return_value=True,
            ),
            patch.object(client, "fetch") as mock_fetch,
        ):
            client.sync()
        mock_fetch.assert_called_once()
    @patch("application.utils.harvester.git_repository_client.subprocess.run")
    def test_fetch_runs_git_command(self, mock_run):
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
        )
        client.fetch()
        self.assertEqual(mock_run.call_count, 2)
    @patch("application.utils.harvester.git_repository_client.subprocess.run")
    def test_checkout_runs_git_command(self, mock_run):
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
        )
        client.checkout("main")
        mock_run.assert_called_once_with(
            [
                "git",
                "-C",
                str(client.get_local_path()),
                "checkout",
                "main",
            ],
            check=True,
            capture_output=True,
            text=True,
            timeout=300,
        )
    @patch("application.utils.harvester.git_repository_client.subprocess.run")
    def test_get_current_commit_sha_runs_git_command(self, mock_run):
        mock_run.return_value.stdout = "abc123\n"
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
        )
        sha = client.get_current_commit_sha()
        self.assertEqual(sha, "abc123")
        mock_run.assert_called_once()
    @patch("application.utils.harvester.git_repository_client.subprocess.run")
    def test_clone_runs_git_command(self, mock_run):
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
        )
        with (
            patch.object(client, "verify_repository_integrity", return_value=False),
            patch.object(client, "is_valid_repository", return_value=True),
        ):
            client.clone()
        mock_run.assert_called()
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/repository_cache_test.py‎
+84
Lines changed: 84 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from pathlib import Path
from application.utils.harvester.repository_cache import (
    build_repository_cache_path,
)
class RepositoryCacheTests(unittest.TestCase):
    def test_build_repository_cache_path(self):
        path = build_repository_cache_path(
            "OWASP",
            "ASVS",
        )
        self.assertEqual(
            path,
            Path(".harvester_cache/owasp/asvs/main"),
        )
Comment on lines R10 to R19
Resolved
    def test_different_branches_have_different_cache_paths(self):
        main_path = build_repository_cache_path(
            owner="OWASP",
            repository="ASVS",
            branch="main",
        )
        dev_path = build_repository_cache_path(
            owner="OWASP",
            repository="ASVS",
            branch="dev",
        )
        self.assertNotEqual(main_path, dev_path)
    def test_case_sensitive_branches_have_different_cache_paths(self):
        release_path = build_repository_cache_path(
            owner="OWASP",
            repository="ASVS",
            branch="Release",
        )
        release_lower_path = build_repository_cache_path(
            owner="OWASP",
            repository="ASVS",
            branch="release",
        )
        self.assertNotEqual(release_path, release_lower_path)
    def test_path_traversal_owner_rejected(self):
        with self.assertRaises(ValueError):
            build_repository_cache_path(
                owner="../../tmp",
                repository="ASVS",
            )
    def test_absolute_owner_rejected(self):
        with self.assertRaises(ValueError):
            build_repository_cache_path(
                owner="/tmp",
                repository="ASVS",
            )
    def test_invalid_repository_name_rejected(self):
        with self.assertRaises(ValueError):
            build_repository_cache_path(
                owner="OWASP",
                repository="../ASVS",
            )
    def test_branch_path_is_encoded(self):
        path = build_repository_cache_path(
            owner="OWASP",
            repository="ASVS",
            branch="feature/test",
        )
        self.assertNotIn("feature/test", str(path))
        self.assertIn("feature%2Ftest", str(path))
if __name__ == "__main__":
    unittest.main()
‎application/utils/harvester/__init__.py‎
+7
Lines changed: 7 additions & 0 deletions
Original file line number	Diff line number	Diff line change
    ReposFile,
)

from .git_repository_client import GitRepositoryClient
from .repository_client import RepositoryClient
from .repository_cache import build_repository_cache_path
__all__ = [
    "build_repository_cache_path",
    "ChunkingConfig",
    "ConfigLoaderError",
    "GitRepositoryClient",
    "PathRules",
    "PollingConfig",
    "RepositoryClient",
    "RepositoryConfig",
    "RepositoryValidationError",
    "ReposFile",
‎application/utils/harvester/git_repository_client.py‎
+283
Lines changed: 283 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import subprocess
from pathlib import Path
from .repository_cache import build_repository_cache_path
from .repository_client import RepositoryClient
import logging
from .repository_lock import repository_lock
import os
import shutil
import tempfile
logger = logging.getLogger(__name__)
class GitRepositoryClient(RepositoryClient):
    def __init__(
        self,
        owner: str,
        repository: str,
        branch: str = "main",
        local_path: Path | None = None,
    ) -> None:
        self.owner = owner
        self.repository = repository
        self.branch = branch
        self.local_path = (
            local_path
            if local_path is not None
            else build_repository_cache_path(owner, repository, branch)
        )
    @property
    def repository_url(self) -> str:
        return f"https://github.com/{self.owner}/{self.repository}.git"
    def clone(self) -> None:
Comment on line R37
Resolved
        logger.info(
            "Cloning repository %s/%s",
            self.owner,
            self.repository,
        )
        self.local_path.parent.mkdir(
            parents=True,
            exist_ok=True,
        )
        self._clone_atomically()
    def _clone_atomically(self) -> None:
        temp_path = Path(
            tempfile.mkdtemp(
                prefix=f"{self.repository}-",
                dir=self.local_path.parent,
            )
        )
        try:
            subprocess.run(
                [
                    "git",
                    "clone",
                    "--branch",
                    self.branch,
                    self.repository_url,
                    str(temp_path),
                ],
                check=True,
                capture_output=True,
                text=True,
                timeout=300,
            )
            if not self.is_valid_repository(temp_path):
                raise RuntimeError("Temporary clone failed integrity verification")
            if self.local_path.exists():
                shutil.rmtree(temp_path)
                return
            os.replace(temp_path, self.local_path)
        except subprocess.CalledProcessError as exc:
            logger.error(
                "Failed to clone repository %s/%s: %s",
                self.owner,
                self.repository,
                exc.stderr,
            )
            raise
        finally:
            if temp_path.exists():
                shutil.rmtree(temp_path, ignore_errors=True)
    def fetch(self) -> None:
        logger.info(
            "Fetching repository %s/%s",
            self.owner,
            self.repository,
        )
        try:
            subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.local_path),
                    "fetch",
                    "origin",
                    self.branch,
                ],
                check=True,
                capture_output=True,
                text=True,
                timeout=300,
            )
            subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.local_path),
                    "reset",
                    "--hard",
                    f"origin/{self.branch}",
                ],
                check=True,
                capture_output=True,
                text=True,
                timeout=300,
            )
        except subprocess.CalledProcessError as exc:
            logger.error(
                "Failed to fetch repository %s/%s: %s",
                self.owner,
                self.repository,
                exc.stderr,
            )
            raise
    def checkout(self, reference: str) -> None:
        if reference.startswith("-"):
            raise ValueError("Invalid git reference")
        logger.info(
            "Checking out %s in %s/%s",
            reference,
            self.owner,
            self.repository,
        )
        try:
            subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.local_path),
                    "checkout",
                    reference,
Comment on line R163
Resolved
                ],
                check=True,
                capture_output=True,
                text=True,
                timeout=300,
            )
Comment on lines R157 to R169
Resolved
        except subprocess.CalledProcessError as exc:
            logger.error(
                "Failed to checkout %s in %s/%s: %s",
                reference,
                self.owner,
                self.repository,
                exc.stderr,
            )
            raise
    def get_local_path(self) -> Path:
        return self.local_path
    def exists_locally(self) -> bool:
        return self.local_path.exists()
    def sync(self) -> None:
        logger.info(
            "Synchronizing repository %s/%s",
            self.owner,
            self.repository,
        )
        with repository_lock(self.local_path):
            if self.verify_repository_integrity():
                self.fetch()
            else:
                self.clone()
    def get_current_commit_sha(self) -> str:
        try:
            result = subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.local_path),
                    "rev-parse",
                    "HEAD",
                ],
                check=True,
                capture_output=True,
                text=True,
                timeout=300,
            )
        except subprocess.CalledProcessError as exc:
            logger.error(
                "Failed to retrieve commit SHA for %s/%s: %s",
                self.owner,
                self.repository,
                exc.stderr,
            )
            raise
        return result.stdout.strip()
    def is_valid_repository(self, repository_path: Path) -> bool:
        if not (repository_path.exists() and repository_path.is_dir()):
            return False
Comment on line R228
Resolved
        try:
            subprocess.run(
                [
                    "git",
                    "-C",
                    str(repository_path),
                    "rev-parse",
                    "--is-inside-work-tree",
                ],
                check=True,
                capture_output=True,
                text=True,
                timeout=300,
            )
            remote = subprocess.run(
                [
                    "git",
                    "-C",
                    str(repository_path),
                    "config",
                    "--get",
                    "remote.origin.url",
                ],
                check=True,
                capture_output=True,
                text=True,
                timeout=300,
            ).stdout.strip()
            if remote.rstrip("/") != self.repository_url.rstrip("/"):
                return False
            subprocess.run(
                [
                    "git",
                    "-C",
                    str(repository_path),
                    "show-ref",
                    "--verify",
                    f"refs/remotes/origin/{self.branch}",
                ],
                check=True,
                capture_output=True,
                text=True,
                timeout=300,
            )
            return True
        except subprocess.CalledProcessError:
            return False
    def verify_repository_integrity(self) -> bool:
        return self.is_valid_repository(self.local_path)
‎application/utils/harvester/repository_cache.py‎
+26
Lines changed: 26 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import os
import re
from pathlib import Path
from urllib.parse import quote
CACHE_ROOT = Path(os.getenv("HARVESTER_CACHE_DIR", ".harvester_cache"))
_VALID_COMPONENT = re.compile(r"^[A-Za-z0-9_.-]+$")
def build_repository_cache_path(
    owner: str, repository: str, branch: str = "main"
) -> Path:
    if not _VALID_COMPONENT.fullmatch(owner):
        raise ValueError(f"Invalid repository owner: {owner}")
    if not _VALID_COMPONENT.fullmatch(repository):
        raise ValueError(f"Invalid repository name: {repository}")
    encoded_branch = quote(branch, safe="")
    candidate = CACHE_ROOT / owner.casefold() / repository.casefold() / encoded_branch
    candidate.resolve().relative_to(CACHE_ROOT.resolve())
    return candidate
‎application/utils/harvester/repository_client.py‎
+36
Lines changed: 36 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from abc import ABC, abstractmethod
from pathlib import Path
class RepositoryClient(ABC):
    @abstractmethod
    def clone(self) -> None:
        """Clone repository locally."""
    @abstractmethod
    def fetch(self) -> None:
        """Fetch latest repository changes."""
    @abstractmethod
    def checkout(self, reference: str) -> None:
        """Checkout a branch, tag, or commit."""
    @abstractmethod
    def get_local_path(self) -> Path:
        """Return local repository path."""
    @abstractmethod
    def exists_locally(self) -> bool:
        """Return whether repository exists locally."""
    @abstractmethod
    def sync(self) -> None:
        """Clone if missing, otherwise fetch latest changes."""
    @abstractmethod
    def get_current_commit_sha(self) -> str:
        """Return HEAD commit SHA."""
    @abstractmethod
    def verify_repository_integrity(self) -> bool:
        """Verify local repository integrity."""
‎application/utils/harvester/repository_lock.py‎
+32
Lines changed: 32 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import contextlib
import os
from pathlib import Path
if os.name == "nt":
    import msvcrt
else:
    import fcntl
@contextlib.contextmanager
def repository_lock(repository_path: Path):
    """
    Acquire an exclusive inter-process lock for a repository cache path.
    """
    lock_path = repository_path.with_suffix(".lock")
    lock_path.parent.mkdir(parents=True, exist_ok=True)
    with lock_path.open("w") as lock_file:
        if os.name == "nt":
            msvcrt.locking(lock_file.fileno(), msvcrt.LK_LOCK, 1)
        else:
            fcntl.flock(lock_file.fileno(), fcntl.LOCK_EX)
        try:
            yield
        finally:
            if os.name == "nt":
                msvcrt.locking(lock_file.fileno(), msvcrt.LK_UNLCK, 1)
            else:
                fcntl.flock(lock_file.fileno(), fcntl.LOCK_UN)



this is week 3 PR files changes section:
‎application/database/db.py‎
+165
Lines changed: 165 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import time
import yaml

from datetime import datetime, timezone
from pprint import pprint

from collections import Counter, defaultdict
    )


class ArtifactIngestEvent(BaseModel):  # type: ignore
    """Tracks one harvested artifact persisted per import run."""
    __tablename__ = "artifact_ingest_event"
    id = sqla.Column(sqla.String, primary_key=True, default=generate_uuid)
    run_id = sqla.Column(
        sqla.String,
        sqla.ForeignKey("import_run.id", onupdate="CASCADE", ondelete="CASCADE"),
        nullable=False,
    )
    artifact_id = sqla.Column(sqla.String, nullable=False)
    harvest_mode = sqla.Column(sqla.String, nullable=False)
    event_type = sqla.Column(sqla.String, nullable=False)
    source_json = sqla.Column(sqla.Text, nullable=False)
    locator_json = sqla.Column(sqla.Text, nullable=False)
    artifact_json = sqla.Column(sqla.Text, nullable=False)
    harvest_json = sqla.Column(sqla.Text, nullable=False)
    observed_at = sqla.Column(sqla.DateTime, nullable=False)
    created_at = sqla.Column(sqla.DateTime, nullable=False)
    __table_args__ = (
        sqla.UniqueConstraint(
            run_id,
            artifact_id,
            name="uq_artifact_ingest_event_run_artifact",
        ),
    )
class IngestChunk(BaseModel):  # type: ignore
    """Tracks every chunk belonging to an artifact ingest event."""
    __tablename__ = "ingest_chunk"
    id = sqla.Column(sqla.String, primary_key=True, default=generate_uuid)
    artifact_event_id = sqla.Column(
        sqla.String,
        sqla.ForeignKey(
            "artifact_ingest_event.id",
            onupdate="CASCADE",
            ondelete="CASCADE",
        ),
        nullable=False,
    )
    chunk_id = sqla.Column(sqla.String, nullable=False)
    text = sqla.Column(sqla.Text, nullable=False)
    char_count = sqla.Column(sqla.Integer, nullable=False)
    span_json = sqla.Column(sqla.Text, nullable=False)
    delta_json = sqla.Column(sqla.Text, nullable=True)
    created_at = sqla.Column(sqla.DateTime, nullable=False)
    __table_args__ = (
        sqla.UniqueConstraint(
            artifact_event_id,
            chunk_id,
            name="uq_ingest_chunk_artifact_chunk",
        ),
    )
class HarvesterCheckpoint(BaseModel):  # type: ignore
    __tablename__ = "harvester_checkpoint"
    repository_id = sqla.Column(sqla.String, primary_key=True)
    provider = sqla.Column(sqla.String, nullable=False)
    owner = sqla.Column(sqla.String, nullable=False)
    repository = sqla.Column(sqla.String, nullable=False)
    branch = sqla.Column(sqla.String, nullable=False)
    last_processed_commit = sqla.Column(sqla.String, nullable=True)
    created_at = sqla.Column(
        sqla.DateTime(timezone=True),
        nullable=False,
        default=lambda: datetime.now(timezone.utc),
    )
    updated_at = sqla.Column(
        sqla.DateTime(timezone=True),
        nullable=False,
        default=lambda: datetime.now(timezone.utc),
    )
    __table_args__ = (
        sqla.UniqueConstraint(
            "provider",
            "owner",
            "repository",
            "branch",
            name="uq_harvester_checkpoint_canonical_source",
        ),
    )
def _serialize_json_value(value: Any) -> str:
    return flask_json.dumps(value)
Comment on lines R392 to R393
Resolved
def _normalize_utc_datetime(value: Any) -> Any:
    from datetime import datetime, timezone
    if isinstance(value, datetime):
        if value.tzinfo is None:
            return value
        return value.astimezone(timezone.utc)
    return value
Comment on lines R396 to R403
def create_import_run(source: str, version: Optional[str] = None) -> ImportRun:
    """Create and persist an import run record. Returns the new ImportRun."""
    from datetime import datetime, timezone
    )


def create_artifact_ingest_event(
    *,
    run_id: str,
    artifact_id: str,
    harvest_mode: str,
    event_type: str,
    source_json: Any,
    locator_json: Any,
    artifact_json: Any,
    harvest_json: Any,
    observed_at: Any,
) -> ArtifactIngestEvent:
    from datetime import datetime, timezone
    observed_at = _normalize_utc_datetime(observed_at)
    event = ArtifactIngestEvent(
        id=generate_uuid(),
        run_id=run_id,
        artifact_id=artifact_id,
        harvest_mode=harvest_mode,
        event_type=event_type,
        source_json=_serialize_json_value(source_json),
        locator_json=_serialize_json_value(locator_json),
        artifact_json=_serialize_json_value(artifact_json),
        harvest_json=_serialize_json_value(harvest_json),
        observed_at=observed_at,
        created_at=_normalize_utc_datetime(datetime.now(timezone.utc)),
    )
    sqla.session.add(event)
    sqla.session.commit()
    return event
def create_ingest_chunk(
    *,
    artifact_event_id: str,
    chunk_id: str,
    text: str,
    char_count: int,
    span_json: Any,
    delta_json: Optional[Any] = None,
) -> IngestChunk:
    from datetime import datetime, timezone
    chunk = IngestChunk(
        id=generate_uuid(),
        artifact_event_id=artifact_event_id,
        chunk_id=chunk_id,
        text=text,
        char_count=char_count,
        span_json=_serialize_json_value(span_json),
        delta_json=(
            _serialize_json_value(delta_json) if delta_json is not None else None
        ),
        created_at=_normalize_utc_datetime(datetime.now(timezone.utc)),
    )
    sqla.session.add(chunk)
    sqla.session.commit()
    return chunk
Comment on lines R453 to R512
coderabbitai[bot] commented on Jul 23
@coderabbitai[bot]
coderabbitai[bot]
on Jul 23
Contributor
🩺 Stability & Availability | 🟠 Major | ⚡ Quick win

No rollback on commit failure for either persistence helper.

Both create_artifact_ingest_event and create_ingest_chunk call sqla.session.add() followed directly by sqla.session.commit() with no try/except. A unique-constraint violation (duplicate run_id+artifact_id, or duplicate artifact_event_id+chunk_id — plausible on retries in an incremental harvester) raises an uncaught IntegrityError and leaves the session in a failed state, breaking subsequent operations on the same session until an explicit rollback() is issued.

🛠️ Suggested pattern (applies to both functions)
🤖 Prompt for AI Agents
ParthAggarwal16 replied on Jul 23
@ParthAggarwal16
ParthAggarwal16
on Jul 23
Pending
Contributor
Author
this helper is almost identical to lots of existing helpers inside OpenCRE, so i dont wanna change the pattern without any reason
@northdpole @Pa04rth would like to know your thoughts on this one as well

Write a reply
def persist_standard_snapshot(
    *,
    run_id: str,
‎application/tests/harvester_test/change_detector_test.py‎
+168
Lines changed: 168 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from unittest.mock import MagicMock
from unittest.mock import call
from unittest.mock import patch
from application.utils.harvester.change_detector import (
    ChangeDetector,
)
class ChangeDetectorTests(unittest.TestCase):
    @patch("application.utils.harvester.change_detector.subprocess.run")
    def test_get_modified_files_since(self, mock_run):
        client = MagicMock()
        client.get_local_path.return_value = "repo-under-test"
        mock_run.side_effect = [
            MagicMock(stdout="resolved_base\n"),
            MagicMock(stdout="resolved_target\n"),
            MagicMock(stdout="a.md\nb.md\na.md\n"),
        ]
        detector = ChangeDetector(client)
        files = detector.get_modified_files_since(
            "base",
            "target",
        )
        self.assertEqual(
            files,
            [
                "a.md",
                "b.md",
            ],
        )
        mock_run.assert_has_calls(
            [
                call(
                    [
                        "git",
                        "-C",
                        "repo-under-test",
                        "rev-parse",
                        "--verify",
                        "--end-of-options",
                        "base^{commit}",
                    ],
                    capture_output=True,
                    text=True,
                    check=True,
                    timeout=60,
                ),
                call(
                    [
                        "git",
                        "-C",
                        "repo-under-test",
                        "rev-parse",
                        "--verify",
                        "--end-of-options",
                        "target^{commit}",
                    ],
                    capture_output=True,
                    text=True,
                    check=True,
                    timeout=60,
                ),
                call(
                    [
                        "git",
                        "-C",
                        "repo-under-test",
                        "diff",
                        "--name-only",
                        "resolved_base",
                        "resolved_target",
                    ],
                    capture_output=True,
                    text=True,
                    check=True,
                    timeout=60,
                ),
            ]
        )
    @patch("application.utils.harvester.change_detector.subprocess.run")
    def test_get_commits_since(self, mock_run):
        client = MagicMock()
        client.get_local_path.return_value = "repo-under-test"
        mock_run.side_effect = [
            MagicMock(stdout="resolved_base\n"),
            MagicMock(stdout="resolved_target\n"),
            MagicMock(stdout="111\n222\n333\n"),
        ]
        detector = ChangeDetector(client)
        commits = detector.get_commits_since(
            "base",
            "target",
        )
        self.assertEqual(
            commits,
            [
                "111",
                "222",
                "333",
            ],
        )
        self.assertEqual(
            mock_run.call_args_list,
            [
                call(
                    [
                        "git",
                        "-C",
                        "repo-under-test",
                        "rev-parse",
                        "--verify",
                        "--end-of-options",
                        "base^{commit}",
                    ],
                    capture_output=True,
                    text=True,
                    check=True,
                    timeout=60,
                ),
                call(
                    [
                        "git",
                        "-C",
                        "repo-under-test",
                        "rev-parse",
                        "--verify",
                        "--end-of-options",
                        "target^{commit}",
                    ],
                    capture_output=True,
                    text=True,
                    check=True,
                    timeout=60,
                ),
                call(
                    [
                        "git",
                        "-C",
                        "repo-under-test",
                        "log",
                        "--reverse",
                        "--format=%H",
                        "resolved_base..resolved_target",
                    ],
                    capture_output=True,
                    text=True,
                    check=True,
                    timeout=60,
                ),
            ],
        )
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/checkpoint_store_test.py‎
+193
Lines changed: 193 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime, timezone
from application import create_app, sqla
from application.utils.harvester.checkpoint_store import CheckpointStore
from application.utils.harvester.models import RepositoryCheckpoint
class CheckpointStoreTests(unittest.TestCase):
    def setUp(self) -> None:
        self.app = create_app(mode="test")
        self.app_context = self.app.app_context()
        self.app_context.push()
        sqla.create_all()
    def tearDown(self) -> None:
        sqla.session.remove()
        sqla.drop_all()
        self.app_context.pop()
    def test_save_and_load_checkpoint(self):
        store = CheckpointStore()
        checkpoint = RepositoryCheckpoint(
            repository_id="owasp-asvs",
            last_processed_commit="abc123",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="owasp",
            repository="asvs",
            branch="main",
        )
        store.save(checkpoint)
        loaded = store.load("owasp-asvs")
        self.assertIsNotNone(loaded)
        assert loaded is not None
        self.assertEqual(loaded.last_processed_commit, "abc123")
        self.assertEqual(loaded.provider, "github")
    def test_update_upsert_and_two_repositories_remain_isolated(self):
        store = CheckpointStore()
        repo_a = RepositoryCheckpoint(
            repository_id="repo-a",
            last_processed_commit="commit-1",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="repo-a",
            branch="main",
        )
        repo_b = RepositoryCheckpoint(
            repository_id="repo-b",
            last_processed_commit="commit-b",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="repo-b",
            branch="main",
        )
        store.save(repo_a)
        store.save(repo_b)
        updated_a = RepositoryCheckpoint(
            repository_id="repo-a",
            last_processed_commit="commit-2",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="repo-a",
            branch="main",
        )
        store.save(updated_a)
        loaded_a = store.load("repo-a")
        loaded_b = store.load("repo-b")
        self.assertIsNotNone(loaded_a)
        self.assertIsNotNone(loaded_b)
        assert loaded_a is not None
        assert loaded_b is not None
        self.assertEqual(loaded_a.last_processed_commit, "commit-2")
        self.assertEqual(loaded_b.last_processed_commit, "commit-b")
    def test_duplicate_canonical_source_identity_rejected(self):
        store = CheckpointStore()
        first = RepositoryCheckpoint(
            repository_id="repo-a",
            last_processed_commit="commit-1",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="shared",
            branch="main",
        )
        second = RepositoryCheckpoint(
            repository_id="repo-b",
            last_processed_commit="commit-2",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="shared",
            branch="main",
        )
        store.save(first)
        with self.assertRaises(ValueError):
            store.save(second)
    def test_immutable_repository_identity(self):
        store = CheckpointStore()
        first = RepositoryCheckpoint(
            repository_id="repo-a",
            last_processed_commit="commit-1",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="repo-a",
            branch="main",
        )
        store.save(first)
        conflicting = RepositoryCheckpoint(
            repository_id="repo-a",
            last_processed_commit="commit-2",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="repo-a",
            branch="develop",
        )
        with self.assertRaises(ValueError):
            store.save(conflicting)
    def test_null_initial_checkpoint(self):
        store = CheckpointStore()
        checkpoint = RepositoryCheckpoint(
            repository_id="repo-a",
            last_processed_commit=None,
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="repo-a",
            branch="main",
        )
        store.save(checkpoint)
        loaded = store.load("repo-a")
        self.assertIsNotNone(loaded)
        assert loaded is not None
        self.assertIsNone(loaded.last_processed_commit)
    def test_transaction_rollback_leaves_previous_checkpoint_intact(self):
        store = CheckpointStore()
        original = RepositoryCheckpoint(
            repository_id="repo-a",
            last_processed_commit="commit-1",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="repo-a",
            branch="main",
        )
        store.save(original)
        conflicting = RepositoryCheckpoint(
            repository_id="repo-a",
            last_processed_commit="commit-2",
            updated_at=datetime.now(timezone.utc),
            provider="github",
            owner="sample",
            repository="repo-a",
            branch="develop",
        )
        with self.assertRaises(ValueError):
            store.save(conflicting)
        loaded = store.load("repo-a")
        self.assertIsNotNone(loaded)
        assert loaded is not None
        self.assertEqual(loaded.last_processed_commit, "commit-1")
    def test_load_missing_repository(self):
        store = CheckpointStore()
        self.assertIsNone(store.load("repo-b"))
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/git_repository_client_integration_test.py‎
+66
Lines changed: 66 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from application.utils.harvester.git_repository_client import (
    GitRepositoryClient,
)
from application.utils.harvester.change_detector import ChangeDetector


class IntegrationGitRepositoryClient(GitRepositoryClient):

        self.assertEqual((self.cache / "test.txt").read_text(), "v1")

    def test_change_detector_uses_captured_target_sha(self):
        client = self.create_client()
        client.clone()
        detector = ChangeDetector(client)
        base = client.get_current_commit_sha()
        (self.work / "file.txt").write_text("B")
        git("add", ".", cwd=self.work)
        git("commit", "-m", "second", cwd=self.work)
        git("push", "origin", "main", cwd=self.work)
        client.fetch()
        target = client.get_current_commit_sha()
        (self.work / "another.txt").write_text("C")
        git("add", ".", cwd=self.work)
        git("commit", "-m", "third", cwd=self.work)
        git("push", "origin", "main", cwd=self.work)
        client.fetch()
        files = detector.get_modified_files_since(base, target)
        commits = detector.get_commits_since(base, target)
        self.assertEqual(files, ["file.txt"])
        self.assertEqual(commits, [target])
    def test_change_detector_returns_commits_oldest_first(self):
        client = self.create_client()
        client.clone()
        detector = ChangeDetector(client)
        base = client.get_current_commit_sha()
        (self.work / "file.txt").write_text("B")
        git("add", ".", cwd=self.work)
        git("commit", "-m", "B", cwd=self.work)
        commit_b = git_output("rev-parse", "HEAD", cwd=self.work)
        (self.work / "file.txt").write_text("C")
        git("add", ".", cwd=self.work)
        git("commit", "-m", "C", cwd=self.work)
        commit_c = git_output("rev-parse", "HEAD", cwd=self.work)
        (self.work / "file.txt").write_text("D")
        git("add", ".", cwd=self.work)
        git("commit", "-m", "D", cwd=self.work)
        commit_d = git_output("rev-parse", "HEAD", cwd=self.work)
        git("push", "origin", "main", cwd=self.work)
        client.fetch()
        commits = detector.get_commits_since(base, commit_d)
        self.assertEqual(
            commits,
            [
                commit_b,
                commit_c,
                commit_d,
            ],
        )

if __name__ == "__main__":
    unittest.main()
‎application/tests/import_run_test.py‎
+52
Lines changed: 52 additions & 0 deletions
Original file line number	Diff line number	Diff line change
"""Tests for import run metadata (Step 6)."""

import json
import unittest
from datetime import datetime, timezone
from application import create_app, sqla
from application.database import db

        self.assertIsNotNone(latest)
        self.assertEqual(latest.id, run2.id)
        self.assertEqual(latest.version, "2.0")
    def test_create_artifact_ingest_event_and_chunk(self) -> None:
        run = db.create_import_run(source="artifact_ingest", version="1.0")
        observed_at = datetime.now(timezone.utc)
        event = db.create_artifact_ingest_event(
            run_id=run.id,
            artifact_id="artifact-1",
            harvest_mode="backfill",
            event_type="discovered",
            source_json={"uri": "https://example.com/source"},
            locator_json={"path": "/tmp/source"},
            artifact_json={"id": "artifact-1"},
            harvest_json={"status": "ok"},
            observed_at=observed_at,
        )
        self.assertIsNotNone(event.id)
        self.assertEqual(event.run_id, run.id)
        self.assertEqual(event.artifact_id, "artifact-1")
        self.assertEqual(
            json.loads(event.source_json), {"uri": "https://example.com/source"}
        )
        self.assertEqual(json.loads(event.locator_json), {"path": "/tmp/source"})
        self.assertEqual(json.loads(event.artifact_json), {"id": "artifact-1"})
        self.assertEqual(json.loads(event.harvest_json), {"status": "ok"})
        self.assertEqual(
            event.observed_at.replace(tzinfo=None),
            observed_at.astimezone(timezone.utc).replace(tzinfo=None),
        )
        self.assertIsNotNone(event.created_at)
        chunk = db.create_ingest_chunk(
            artifact_event_id=event.id,
            chunk_id="chunk-1",
            text="hello world",
            char_count=11,
            span_json={"start": 0, "end": 11},
            delta_json={"op": "add"},
        )
        self.assertIsNotNone(chunk.id)
        self.assertEqual(chunk.artifact_event_id, event.id)
        self.assertEqual(chunk.chunk_id, "chunk-1")
        self.assertEqual(chunk.text, "hello world")
        self.assertEqual(chunk.char_count, 11)
        self.assertEqual(json.loads(chunk.span_json), {"start": 0, "end": 11})
        self.assertEqual(json.loads(chunk.delta_json), {"op": "add"})
        self.assertIsNotNone(chunk.created_at)
‎application/utils/harvester/change_detector.py‎
+107
Lines changed: 107 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import logging
import subprocess
from .git_repository_client import GitRepositoryClient
logger = logging.getLogger(__name__)
class ChangeDetector:
    def __init__(self, repository_client: GitRepositoryClient):
        self.repository_client = repository_client
    def _resolve_commit(self, commit_sha: str) -> str:
        try:
            result = subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.repository_client.get_local_path()),
                    "rev-parse",
                    "--verify",
                    "--end-of-options",
                    f"{commit_sha}^{{commit}}",
                ],
                capture_output=True,
                text=True,
                check=True,
                timeout=60,
            )
        except subprocess.CalledProcessError as exc:
            logger.error("Git command failed: %s", exc.stderr)
            raise
        return result.stdout.strip()
    def get_modified_files_since(
        self, base_commit: str, target_commit: str
    ) -> list[str]:
        logger.info(
            "Detecting changes between %s and %s",
            base_commit,
            target_commit,
        )
        base = self._resolve_commit(base_commit)
        target = self._resolve_commit(target_commit)
        try:
            result = subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.repository_client.get_local_path()),
                    "diff",
                    "--name-only",
Comment on lines R54 to R55
                    base,
                    target,
                ],
                capture_output=True,
                text=True,
                check=True,
                timeout=60,
            )
        except subprocess.CalledProcessError as exc:
            logger.error("Git command failed: %s", exc.stderr)
            raise
        files = [
            file_path for file_path in result.stdout.splitlines() if file_path.strip()
        ]
        return sorted(set(files))
    def get_commits_since(self, base_commit: str, target_commit: str) -> list[str]:
        base = self._resolve_commit(base_commit)
        target = self._resolve_commit(target_commit)
        try:
            result = subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.repository_client.get_local_path()),
                    "log",
                    "--reverse",
                    "--format=%H",
                    f"{base}..{target}",
                ],
                capture_output=True,
                text=True,
                check=True,
                timeout=60,
            )
        except subprocess.CalledProcessError as exc:
            logger.error("Git command failed: %s", exc.stderr)
            raise
        commits = [sha for sha in result.stdout.splitlines() if sha.strip()]
        logger.info(
            "Detected %s commits between %s and %s",
            len(commits),
            base_commit,
            target_commit,
        )
        return commits
‎application/utils/harvester/checkpoint_store.py‎
+95
Lines changed: 95 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from typing import Any
from sqlalchemy.exc import IntegrityError
from application import sqla
from application.database.db import HarvesterCheckpoint
from .models import RepositoryCheckpoint
class CheckpointStore:
Comment on line R10
Resolved
    def __init__(self, session: Any = None) -> None:
        self._session = session
    @property
    def session(self) -> Any:
        return self._session if self._session is not None else sqla.session
    def load(self, repository_id: str) -> RepositoryCheckpoint | None:
        session = self.session
        record = (
            session.query(HarvesterCheckpoint)
            .filter_by(repository_id=repository_id)
            .first()
        )
        if record is None:
            return None
        return RepositoryCheckpoint(
            repository_id=record.repository_id,
            last_processed_commit=record.last_processed_commit,
            updated_at=record.updated_at,
            provider=record.provider,
            owner=record.owner,
            repository=record.repository,
            branch=record.branch,
        )
    def save(self, checkpoint: RepositoryCheckpoint) -> None:
        session = self.session
        existing = (
            session.query(HarvesterCheckpoint)
            .filter_by(repository_id=checkpoint.repository_id)
            .first()
        )
        if existing is None:
            canonical_conflict = (
                session.query(HarvesterCheckpoint)
                .filter_by(
                    provider=checkpoint.provider,
                    owner=checkpoint.owner,
                    repository=checkpoint.repository,
                    branch=checkpoint.branch,
                )
                .first()
            )
            if canonical_conflict is not None:
                session.rollback()
                raise ValueError("duplicate canonical source identity")
            new_record = HarvesterCheckpoint(
                repository_id=checkpoint.repository_id,
                provider=checkpoint.provider,
                owner=checkpoint.owner,
                repository=checkpoint.repository,
                branch=checkpoint.branch,
                last_processed_commit=checkpoint.last_processed_commit,
                updated_at=checkpoint.updated_at,
            )
            session.add(new_record)
            try:
                session.commit()
            except IntegrityError:
                session.rollback()
                raise ValueError("duplicate canonical source identity")
            except Exception:
                session.rollback()
                raise
            return
        if (
            existing.provider != checkpoint.provider
            or existing.owner != checkpoint.owner
            or existing.repository != checkpoint.repository
            or existing.branch != checkpoint.branch
        ):
            session.rollback()
            raise ValueError("immutable repository identity")
        existing.last_processed_commit = checkpoint.last_processed_commit
        existing.updated_at = checkpoint.updated_at
        try:
            session.commit()
        except Exception:
            session.rollback()
            raise
‎application/utils/harvester/git_repository_client.py‎
+2
Lines changed: 2 additions & 0 deletions
Original file line number	Diff line number	Diff line change
logger = logging.getLogger(__name__)


class GitRepositoryClient(RepositoryClient):
    def __init__(
        self,
        owner: str,
        repository: str,
        branch: str = "main",
        local_path: Path | None = None,
    ) -> None:
        if branch.startswith("-"):
            raise ValueError("Invalid git branch")
        self.owner = owner
        self.repository = repository
        self.branch = branch

        self.local_path = (
            local_path
            if local_path is not None
            else build_repository_cache_path(owner, repository, branch)
        )

Comment on lines R15 to R34
Resolved
    @property
    def repository_url(self) -> str:
        return f"https://github.com/{self.owner}/{self.repository}.git"
                    "-C",
                    str(self.local_path),
                    "checkout",
                    reference,
Comment on line R165
northdpole commented on Jul 26
@northdpole
northdpole
on Jul 26
Collaborator
Blocker (regression): -- after checkout makes reference a pathspec, so checkout("main") tries to restore a file named main instead of switching revisions. This was fixed in #983 without --; please revert to:

["git", "-C", str(self.local_path), "checkout", reference]
and update the unit test to match (do not teach the buggy form).

Write a reply
                ],
                check=True,
                capture_output=True,
‎application/utils/harvester/models.py‎
+20
Lines changed: 20 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from dataclasses import dataclass
from datetime import datetime
@dataclass(slots=True)
class RepositoryCheckpoint:
    repository_id: str
    last_processed_commit: str | None
    updated_at: datetime
    provider: str
    owner: str
    repository: str
    branch: str
@dataclass(slots=True)
class RepositoryChangeSet:
    repository_id: str
    commit_sha: str
    modified_files: list[str]
‎application/utils/harvester/repository_cache.py‎
+3
Lines changed: 3 additions & 0 deletions
Original file line number	Diff line number	Diff line change
    if not _VALID_COMPONENT.fullmatch(repository):
        raise ValueError(f"Invalid repository name: {repository}")

    if branch in {".", ".."}:
        raise ValueError("Invalid branch name")
    encoded_branch = quote(branch, safe="")
    candidate = CACHE_ROOT / owner.casefold() / repository.casefold() / encoded_branch

    candidate.resolve().relative_to(CACHE_ROOT.resolve())
Comment on lines R24 to R27
Resolved

    return candidate
‎application/utils/harvester/repository_lock.py‎
+1
-1
Lines changed: 1 addition & 1 deletion
Original file line number	Diff line number	Diff line change
    import fcntl


@contextlib.contextmanager
def repository_lock(repository_path: Path):
    """
    Acquire an exclusive inter-process lock for a repository cache path.
    """

    lock_path = repository_path.with_suffix(".lock")
    lock_path = repository_path.parent / f"{repository_path.name}.lock"
    lock_path.parent.mkdir(parents=True, exist_ok=True)

Comment on lines R11 to R19
Resolved
    with lock_path.open("w") as lock_file:
        if os.name == "nt":
            msvcrt.locking(lock_file.fileno(), msvcrt.LK_LOCK, 1)
‎migrations/versions/6a9d0d62ef41_add_harvester_checkpoint_table.py‎
+41
Lines changed: 41 additions & 0 deletions
Original file line number	Diff line number	Diff line change
"""add harvester_checkpoint table
Revision ID: 6a9d0d62ef41
Revises: 9f1a2b3c4d5e
Create Date: 2026-07-25
"""
from alembic import op
import sqlalchemy as sa
revision = "6a9d0d62ef41"
down_revision = "9f1a2b3c4d5e"
branch_labels = None
depends_on = None
def upgrade():
    op.create_table(
        "harvester_checkpoint",
        sa.Column("repository_id", sa.String(), primary_key=True),
        sa.Column("provider", sa.String(), nullable=False),
        sa.Column("owner", sa.String(), nullable=False),
        sa.Column("repository", sa.String(), nullable=False),
        sa.Column("branch", sa.String(), nullable=False),
        sa.Column("last_processed_commit", sa.String(), nullable=True),
        sa.Column("created_at", sa.DateTime(timezone=True), nullable=False),
        sa.Column("updated_at", sa.DateTime(timezone=True), nullable=False),
        sa.UniqueConstraint(
            "provider",
            "owner",
            "repository",
            "branch",
            name="uq_harvester_checkpoint_canonical_source",
        ),
    )
def downgrade():
    op.drop_table("harvester_checkpoint")
‎migrations/versions/9f1a2b3c4d5e_add_artifact_ingest_persistence.py‎
+82
Lines changed: 82 additions & 0 deletions
Original file line number	Diff line number	Diff line change
"""add artifact ingest event and chunk tables
Revision ID: 9f1a2b3c4d5e
Revises: a1b2c3d4e5f6
Create Date: 2026-07-23
"""
from alembic import op
import sqlalchemy as sa
revision = "9f1a2b3c4d5e"
down_revision = "a1b2c3d4e5f6"
branch_labels = None
depends_on = None
def upgrade():
    op.create_table(
        "artifact_ingest_event",
        sa.Column("id", sa.String(), primary_key=True),
        sa.Column("run_id", sa.String(), nullable=False),
        sa.Column("artifact_id", sa.String(), nullable=False),
        sa.Column("harvest_mode", sa.String(), nullable=False),
        sa.Column("event_type", sa.String(), nullable=False),
        sa.Column("source_json", sa.Text(), nullable=False),
        sa.Column("locator_json", sa.Text(), nullable=False),
        sa.Column("artifact_json", sa.Text(), nullable=False),
        sa.Column("harvest_json", sa.Text(), nullable=False),
        sa.Column("observed_at", sa.DateTime(), nullable=False),
        sa.Column("created_at", sa.DateTime(), nullable=False),
        sa.ForeignKeyConstraint(
            ["run_id"],
            ["import_run.id"],
            onupdate="CASCADE",
            ondelete="CASCADE",
        ),
    )
    op.create_unique_constraint(
        "uq_artifact_ingest_event_run_artifact",
        "artifact_ingest_event",
        ["run_id", "artifact_id"],
    )
    op.create_table(
        "ingest_chunk",
        sa.Column("id", sa.String(), primary_key=True),
        sa.Column("artifact_event_id", sa.String(), nullable=False),
        sa.Column("chunk_id", sa.String(), nullable=False),
        sa.Column("text", sa.Text(), nullable=False),
        sa.Column("char_count", sa.Integer(), nullable=False),
        sa.Column("span_json", sa.Text(), nullable=False),
        sa.Column("delta_json", sa.Text(), nullable=True),
        sa.Column("created_at", sa.DateTime(), nullable=False),
        sa.ForeignKeyConstraint(
            ["artifact_event_id"],
            ["artifact_ingest_event.id"],
            onupdate="CASCADE",
            ondelete="CASCADE",
        ),
    )
    op.create_unique_constraint(
        "uq_ingest_chunk_artifact_chunk",
        "ingest_chunk",
        ["artifact_event_id", "chunk_id"],
    )
def downgrade():
    op.drop_constraint(
        "uq_ingest_chunk_artifact_chunk",
        "ingest_chunk",
        type_="unique",
    )
    op.drop_table("ingest_chunk")
    op.drop_constraint(
        "uq_artifact_ingest_event_run_artifact",
        "artifact_ingest_event",
        type_="unique",
    )
    op.drop_table("artifact_ingest_event")


this is week 4 PR files changes section:

application/database/db.py‎
+4
Lines changed: 4 additions & 0 deletions
Original file line number	Diff line number	Diff line change
    )


def _serialize_json_value(value: Any) -> str:
    if value is None:
        return "null"
    if isinstance(value, str):
        return value
    return flask_json.dumps(value)


def _normalize_utc_datetime(value: Any) -> Any:
    from datetime import datetime, timezone

    if isinstance(value, datetime):
        if value.tzinfo is None:
            return value
        return value.astimezone(timezone.utc)
    return value

Comment on lines R392 to R408
coderabbitai[bot] commented on Jul 29
@coderabbitai[bot]
coderabbitai[bot]
on Jul 29
Contributor
🗄️ Data Integrity & Integration | 🟡 Minor | ⚡ Quick win

_normalize_utc_datetime silently skips normalization for naive input.

Aware datetimes get converted to UTC, but a naive datetime is returned unchanged rather than being rejected or assumed-UTC. If a caller ever passes a naive, non-UTC datetime to observed_at/created_at, it will be persisted as-is, silently breaking the "always UTC" invariant the helper is meant to guarantee (and undermining comparisons against the tz-aware timestamps elsewhere, e.g. HarvesterCheckpoint).

🩹 Proposed fix: make naive input explicit
🤖 Prompt for AI Agents
Write a reply

# --- Module B: Noise/Relevance Filter (harvest in -> knowledge queue out) ---

    )


def create_artifact_ingest_event(
    *,
    run_id: str,
    artifact_id: str,
    harvest_mode: str,
    event_type: str,
    source_json: Any,
    locator_json: Any,
    artifact_json: Any,
    harvest_json: Any,
    observed_at: Any,
) -> ArtifactIngestEvent:
    from datetime import datetime, timezone

    observed_at = _normalize_utc_datetime(observed_at)

    event = ArtifactIngestEvent(
        id=generate_uuid(),
        run_id=run_id,
        artifact_id=artifact_id,
        harvest_mode=harvest_mode,
        event_type=event_type,
        source_json=_serialize_json_value(source_json),
        locator_json=_serialize_json_value(locator_json),
        artifact_json=_serialize_json_value(artifact_json),
        harvest_json=_serialize_json_value(harvest_json),
        observed_at=observed_at,
        created_at=_normalize_utc_datetime(datetime.now(timezone.utc)),
    )
    sqla.session.add(event)
    sqla.session.commit()
    return event


def create_ingest_chunk(
    *,
    artifact_event_id: str,
    chunk_id: str,
    text: str,
    char_count: int,
    span_json: Any,
    delta_json: Optional[Any] = None,
) -> IngestChunk:
    from datetime import datetime, timezone

    chunk = IngestChunk(
        id=generate_uuid(),
        artifact_event_id=artifact_event_id,
        chunk_id=chunk_id,
        text=text,
        char_count=char_count,
        span_json=_serialize_json_value(span_json),
        delta_json=(
            _serialize_json_value(delta_json) if delta_json is not None else None
        ),
        created_at=_normalize_utc_datetime(datetime.now(timezone.utc)),
    )
    sqla.session.add(chunk)
    sqla.session.commit()
    return chunk

Comment on lines R528 to R588
coderabbitai[bot] commented on Jul 29
@coderabbitai[bot]
coderabbitai[bot]
on Jul 29
Contributor
🩺 Stability & Availability | 🟠 Major | ⚡ Quick win

Unguarded session.commit() risks leaving the session in an aborted state on constraint violation.

Both create_artifact_ingest_event and create_ingest_chunk call sqla.session.add(...) then sqla.session.commit() with no try/except. Both new tables enforce unique constraints (uq_artifact_ingest_event_run_artifact, uq_ingest_chunk_artifact_chunk) that a harvester retry after a transient failure (or overlapping backfills) could violate. An uncaught IntegrityError here will abort the DB transaction and leave the shared session unusable for any subsequent operation in the same request/scope until it's rolled back — a real cascading-failure risk.

This is inconsistent with the rollback discipline already used elsewhere in this file for comparable writes (e.g. CheckpointStore.save(), add_node()), which wrap commit() in try/except and roll back on failure.

🛡️ Proposed fix: rollback on commit failure
Consider also adding a regression test for the duplicate-insert path (mirroring checkpoint_store_test.py's test_duplicate_canonical_source_identity_rejected) once this is fixed.

🤖 Prompt for AI Agents
Write a reply

def persist_standard_snapshot(
    *,
‎application/tests/harvester_test/file_filter_test.py‎
+121
Lines changed: 121 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from application.utils.harvester.file_filter import (
    FileFilter,
)
class FileFilterTests(unittest.TestCase):
    def test_extension_filtering(self):
        file_filter = FileFilter()
        result = file_filter.filter_files(
            [
                "README.md",
                "image.png",
                "script.js",
            ]
        )
        self.assertEqual(
            result,
            ["README.md"],
        )
    def test_path_exclusion(self):
        file_filter = FileFilter()
        result = file_filter.filter_files(
            [
                ".github/workflows/test.yml",
Comment on line R30
northdpole commented on Jul 19
@northdpole
northdpole
on Jul 19
Collaborator
This does not test exclusion matching because .yml is already rejected by the extension allowlist; the combined test has the same problem with .js. Replace excluded examples with allowed documentation extensions so removing exclusion matching would make the test fail, e.g. .github/workflows/README.md and node_modules/react/README.md. Add focused cases for nested paths, the real **/archive/** custom glob, invalid glob handling, explicit empty exclusions/extensions, and default-instance isolation. Keep extension and path-filter behavior in separate tests so each assertion has one reason to pass.

ParthAggarwal16 replied on Jul 29
@ParthAggarwal16
ParthAggarwal16
on Jul 29
Contributor
Author
i looked into invalid glob handling, i tried using malformed patterns such as [ expecting pathspec to reject them, but pathspec.PathSpec.from_lines() accepts them without raising an exception, so I couldn’t find a practical invalid glob case to test against, is there a specific pattern you had in mind?
image

Write a reply
                "docs/setup.md",
            ]
        )
        self.assertEqual(
            result,
            ["docs/setup.md"],
        )
    def test_combined_filtering(self):
        file_filter = FileFilter()
        result = file_filter.filter_files(
            [
                "README.md",
                ".github/workflows/README.md",
                "node_modules/react/README.md",
                "docs/setup.md",
            ]
        )
        self.assertEqual(
            result,
            [
                "README.md",
                "docs/setup.md",
            ],
        )
    def test_empty_overrides_are_respected(self):
        file_filter = FileFilter(
            exclude_patterns=[],
            allowed_extensions=set(),
        )
        result = file_filter.filter_files(
            [
                "README.md",
                "image.png",
            ]
        )
        self.assertEqual(result, [])
    def test_nested_directory_globs(self):
        file_filter = FileFilter()
        result = file_filter.filter_files(
            [
                ".github/README.md",
                "packages/site/node_modules/README.md",
                "docs/archive/old.md",
                ".cursor/rules/project.md",
                "docs/setup.md",
            ]
        )
        self.assertEqual(result, ["docs/setup.md"])
    def test_explicit_empty_exclusions(self):
        file_filter = FileFilter(exclude_patterns=[])
        result = file_filter.filter_files(
            [
                ".github/README.md",
            ]
        )
        self.assertEqual(
            result,
            [".github/README.md"],
        )
    def test_default_instance_isolation(self):
        first = FileFilter()
        second = FileFilter()
        first.exclude_patterns.append("**/foo/**")
        self.assertNotIn(
            "**/foo/**",
            second.exclude_patterns,
        )
    def test_empty_extension_raises(self):
        with self.assertRaises(ValueError):
            FileFilter(allowed_extensions={""})
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/filtering_benchmark_test.py‎
+30
Lines changed: 30 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from application.utils.harvester.file_filter import FileFilter
from application.utils.harvester.filtering_benchmark import FilteringBenchmark
class FilteringBenchmarkTests(unittest.TestCase):
    def test_filtering_benchmark(self):
        files = [
            "README.md",
            ".github/workflows/ci.yml",
            "docs/guide.md",
            "image.png",
            "notes.txt",
            "package-lock.json",
        ]
        benchmark = FilteringBenchmark(file_filter=FileFilter())
        result = benchmark.run(files)
        self.assertEqual(result.total_files, 6)
        self.assertEqual(result.retained_files, 3)
        self.assertEqual(result.filtered_files, 3)
        self.assertEqual(result.retention_rate, 0.5)
        self.assertEqual(result.filtering_rate, 0.5)
Comment on lines R7 to R27
Resolved
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/filtering_metrics_test.py‎
+35
Lines changed: 35 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from application.utils.harvester.filtering_metrics import (
    FilteringMetricsCollector,
)
class FilteringMetricsCollectorTests(unittest.TestCase):
    def test_filtering_metrics_collection(self):
        collector = FilteringMetricsCollector()
        collector.record_retained()
        collector.record_retained()
        collector.record_filtered()
        metrics = collector.build()
        self.assertEqual(
            metrics.total_files,
            3,
        )
        self.assertEqual(
            metrics.retained_files,
            2,
        )
        self.assertEqual(
            metrics.filtered_files,
            1,
        )
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/git_repository_client_test.py‎
+2
-1
Lines changed: 2 additions & 1 deletion
Original file line number	Diff line number	Diff line change

        mock_clone.assert_called_once()

    def test_sync_fetches_when_repository_exists(self):
    @patch("application.utils.harvester.git_repository_client.subprocess.run")
    def test_sync_fetches_when_repository_exists(self, mock_run):
        client = GitRepositoryClient(
            owner="OWASP",
            repository="ASVS",
‎application/utils/harvester/__init__.py‎
+10
Lines changed: 10 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from .git_repository_client import GitRepositoryClient
from .repository_client import RepositoryClient
from .repository_cache import build_repository_cache_path
from .file_filter import FileFilter
from .filtering_metrics import FilteringMetricsCollector
from .filtering_benchmark import (
    FilteringBenchmark,
    FilteringBenchmarkResult,
)

__all__ = [
    "build_repository_cache_path",
    "ChunkingConfig",
    "ConfigLoaderError",
    "GitRepositoryClient",
    "FileFilter",
    "FilteringMetricsCollector",
    "FilteringBenchmark",
    "FilteringBenchmarkResult",
    "PathRules",
    "PollingConfig",
    "RepositoryClient",
‎application/utils/harvester/exclude_patterns.txt‎
+2
-1
Lines changed: 2 additions & 1 deletion
Original file line number	Diff line number	Diff line change

# to filter non-documentation files during harvesting.

**/.git/*
**/.github/**
**/.git/**
**/node_modules/**
**/__pycache__/**
**/.claude/**
‎application/utils/harvester/file_filter.py‎
+84
Lines changed: 84 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from pathlib import PurePosixPath
from pathlib import Path
import pathspec
DEFAULT_ALLOWED_EXTENSIONS = {
    ".md",
    ".mdx",
    ".rst",
    ".txt",
    ".adoc",
}
DEFAULT_EXCLUDE_PATTERNS = tuple(
    line.strip()
    for line in (
        Path(__file__)
        .with_name("exclude_patterns.txt")
        .read_text(encoding="utf-8")
        .splitlines()
    )
    if line.strip() and not line.lstrip().startswith("#")
)
class FileFilter:
    def __init__(
        self,
        exclude_patterns: list[str] | None = None,
        allowed_extensions: set[str] | None = None,
    ):
        self.exclude_patterns: list[str] = (
            list(DEFAULT_EXCLUDE_PATTERNS)
            if exclude_patterns is None
            else list(exclude_patterns)
        )
        self.allowed_extensions: set[str] = (
            set(DEFAULT_ALLOWED_EXTENSIONS)
            if allowed_extensions is None
            else set(allowed_extensions)
        )
Comment on lines R37 to R41
Resolved
        self._validate_patterns()
        try:
            self._exclude_spec = pathspec.PathSpec.from_lines(
                "gitignore",
                self.exclude_patterns,
            )
        except Exception as exc:
            raise ValueError("Invalid exclude glob") from exc
    def _validate_patterns(self) -> None:
        if any(not pattern for pattern in self.exclude_patterns):
            raise ValueError("Exclude pattern cannot be empty")
        if any(not extension for extension in self.allowed_extensions):
            raise ValueError("Allowed extension cannot be empty")
    def _normalize_path(self, file_path: str) -> str:
        return PurePosixPath(file_path).as_posix()
    def is_excluded_by_pattern(self, file_path: str) -> bool:
        normalized = self._normalize_path(file_path)
        return self._exclude_spec.match_file(normalized)
    def is_allowed_extension(self, file_path: str) -> bool:
        return any(
            file_path.endswith(extension) for extension in self.allowed_extensions
        )
    def filter_files(self, files: list[str]) -> list[str]:
        filtered = []
        for file_path in files:
            if self.is_excluded_by_pattern(file_path):
                continue
            if not self.is_allowed_extension(file_path):
                continue
            filtered.append(file_path)
        return filtered
‎application/utils/harvester/filtering_benchmark.py‎
+32
Lines changed: 32 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from dataclasses import dataclass
from .file_filter import FileFilter
@dataclass
class FilteringBenchmarkResult:
    total_files: int
    retained_files: int
    filtered_files: int
    retention_rate: float
    filtering_rate: float
class FilteringBenchmark:
    def __init__(self, file_filter: FileFilter):
        self.file_filter = file_filter
    def run(self, file_paths: list[str]) -> FilteringBenchmarkResult:
        retained = self.file_filter.filter_files(file_paths)
        total = len(file_paths)
        retained_count = len(retained)
        filtered_count = total - retained_count
        return FilteringBenchmarkResult(
            total_files=total,
            retained_files=retained_count,
            filtered_files=filtered_count,
            retention_rate=(retained_count / total if total else 0.0),
            filtering_rate=(filtered_count / total if total else 0.0),
        )
‎application/utils/harvester/filtering_metrics.py‎
+23
Lines changed: 23 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from .models import FilteringMetrics
class FilteringMetricsCollector:
    def __init__(self):
        self.total_files = 0
        self.retained_files = 0
        self.filtered_files = 0
    def record_retained(self) -> None:
        self.total_files += 1
        self.retained_files += 1
    def record_filtered(self) -> None:
        self.total_files += 1
        self.filtered_files += 1
    def build(self) -> FilteringMetrics:
        return FilteringMetrics(
            total_files=self.total_files,
            retained_files=self.retained_files,
            filtered_files=self.filtered_files,
        )
‎application/utils/harvester/models.py‎
+7
Lines changed: 7 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from dataclasses import dataclass
from datetime import datetime
from pydantic import BaseModel


@dataclass(slots=True)
    repository_id: str
    commit_sha: str
    modified_files: list[str]
class FilteringMetrics(BaseModel):
    total_files: int
    retained_files: int
    filtered_files: int


this is week 5 PR files changes section:

application/tests/harvester_test/diff_normalizer_test.py‎
+117
Lines changed: 117 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime
from application.utils.harvester.diff_normalizer import (
    DiffNormalizer,
)
from application.utils.harvester.models import (
    DiffBlock,
)
DIFF_METADATA = {
    "repository": "OWASP/ASVS",
    "commit_sha": "abc123",
    "committed_at": datetime(2026, 1, 1),
}
class DiffNormalizerTests(unittest.TestCase):
    def test_whitespace_normalization(self):
        normalizer = DiffNormalizer()
        blocks = [
            DiffBlock(
                file_path="README.md",
                added_lines=[
                    "     Hello      World      ",
                    "\t\tTabs\t\tEverywhere\t",
                    "",
                    "     ",
                    "Unicode\u00a0Space",
                    "Mix\t of\t tabs   and    spaces",
                    "   Multiple     words      together   ",
                    "\u00a0\u00a0Leading unicode spaces\u00a0",
                    "   ## Authentication   ",
                    "   -   Use MFA   ",
                    "   `inline code`   ",
                    "   **Important**   ",
                ],
                **DIFF_METADATA,
            )
        ]
        result = normalizer.normalize(blocks)
        self.assertEqual(
            result[0].added_lines,
            [
                "Hello World",
                "Tabs Everywhere",
                "Unicode Space",
                "Mix of tabs and spaces",
                "Multiple words together",
                "Leading unicode spaces",
                "## Authentication",
                "- Use MFA",
                "`inline code`",
                "**Important**",
            ],
        )
    def test_remove_empty_lines(self):
        normalizer = DiffNormalizer()
        blocks = [
            DiffBlock(
                file_path="README.md",
                added_lines=[
                    "",
                    "   ",
                    "Hello",
                ],
                **DIFF_METADATA,
            )
        ]
        result = normalizer.normalize(blocks)
        self.assertEqual(
            result[0].added_lines,
            [
                "Hello",
            ],
        )
    def test_multiple_blocks(self):
        normalizer = DiffNormalizer()
        blocks = [
            DiffBlock(
                file_path="a.md",
                added_lines=["  One  "],
                **DIFF_METADATA,
            ),
            DiffBlock(
                file_path="b.md",
                added_lines=["  Two  "],
                **DIFF_METADATA,
            ),
        ]
        result = normalizer.normalize(blocks)
        self.assertEqual(
            result[0].added_lines,
            ["One"],
        )
        self.assertEqual(
            result[1].added_lines,
            ["Two"],
        )
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/diff_parser_test.py‎
+103
Lines changed: 103 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from datetime import UTC, datetime
import unittest
from application.utils.harvester.diff_parser import (
    DiffParser,
)
TEST_REPOSITORY = "OWASP/ASVS"
TEST_COMMIT_SHA = "abc123"
TEST_COMMITTED_AT = datetime.now(UTC)
class DiffParserTests(unittest.TestCase):
    def test_single_file_diff(self):
        parser = DiffParser()
        diff = """diff --git a/test.md b/test.md
--- a/test.md
+++ b/test.md
@@
-old
+new
+another
"""
        blocks = parser.parse(
            diff,
            repository=TEST_REPOSITORY,
            commit_sha=TEST_COMMIT_SHA,
            committed_at=TEST_COMMITTED_AT,
        )
        self.assertEqual(len(blocks), 1)
        self.assertEqual(
            blocks[0].file_path,
            "test.md",
        )
        self.assertEqual(
            blocks[0].added_lines,
            [
                "new",
                "another",
            ],
        )
        self.assertEqual(blocks[0].repository, TEST_REPOSITORY)
        self.assertEqual(blocks[0].commit_sha, TEST_COMMIT_SHA)
        self.assertEqual(blocks[0].committed_at, TEST_COMMITTED_AT)
    def test_multiple_files(self):
        parser = DiffParser()
        diff = """diff --git a/a.md b/a.md
@@
+one
diff --git a/b.md b/b.md
@@
+two
"""
        blocks = parser.parse(
            diff,
            repository=TEST_REPOSITORY,
            commit_sha=TEST_COMMIT_SHA,
            committed_at=TEST_COMMITTED_AT,
        )
        self.assertEqual(len(blocks), 2)
        self.assertEqual(blocks[0].file_path, "a.md")
        self.assertEqual(blocks[1].file_path, "b.md")
        self.assertEqual(blocks[0].repository, TEST_REPOSITORY)
        self.assertEqual(blocks[1].repository, TEST_REPOSITORY)
    def test_deleted_lines_are_ignored(self):
        parser = DiffParser()
        diff = """diff --git a/test.md b/test.md
@@
-old
+new
"""
        blocks = parser.parse(
            diff,
            repository=TEST_REPOSITORY,
            commit_sha=TEST_COMMIT_SHA,
            committed_at=TEST_COMMITTED_AT,
        )
        self.assertEqual(
            blocks[0].added_lines,
            [
                "new",
            ],
        )
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/diff_pipeline_test.py‎
+73
Lines changed: 73 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from datetime import UTC, datetime
import subprocess
import time
import unittest
import os
from application.utils.harvester.diff_normalizer import DiffNormalizer
from application.utils.harvester.diff_parser import DiffParser
from application.utils.harvester.diff_retriever import DiffRetriever
from application.utils.harvester.git_repository_client import GitRepositoryClient
class DiffPipelineBenchmark(unittest.TestCase):
    """
    Simple benchmark to ensure the complete diff pipeline remains fast.
    This is not intended as a strict performance benchmark, only as a
    regression guard against accidental slowdowns.
    """
    def test_pipeline_benchmark(self):
        if os.getenv("OPENCRE_RUN_NETWORK_TESTS") != "1":
            self.skipTest("Network benchmark disabled")
        client = GitRepositoryClient(
            "OWASP",
            "ASVS",
            "master",
        )
        client.sync()
        head_commit = client.get_current_commit_sha()
        previous_commit = subprocess.run(
            [
                "git",
                "-C",
                str(client.get_local_path()),
                "rev-parse",
                "HEAD~1",
            ],
            check=True,
            capture_output=True,
            text=True,
            timeout=300,
        ).stdout.strip()
        retriever = DiffRetriever(client)
        parser = DiffParser()
        normalizer = DiffNormalizer()
        start = time.perf_counter()
Comment on lines R26 to R53
Resolved
        diff = retriever.get_diff(
            previous_commit,
            head_commit,
        )
        blocks = parser.parse(
            diff,
            repository="OWASP/ASVS",
            commit_sha=head_commit,
            committed_at=datetime.now(UTC),
        )
        normalizer.normalize(blocks)
        elapsed = time.perf_counter() - start
        print(f"\nPipeline took {elapsed:.3f}s")
        self.assertLess(elapsed, 5)
‎application/tests/harvester_test/diff_retriever_test.py‎
+99
Lines changed: 99 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from unittest.mock import MagicMock
from unittest.mock import patch
from unittest.mock import call
from application.utils.harvester.diff_retriever import (
    DiffRetriever,
)
class DiffRetrieverTests(unittest.TestCase):
    @patch("application.utils.harvester.diff_retriever.subprocess.run")
    def test_get_diff(self, mock_run):
        mock_run.side_effect = [
            MagicMock(stdout="abc123\n"),
            MagicMock(stdout="def456\n"),
            MagicMock(stdout=b"diff --git a/README.md b/README.md\n"),
        ]
        client = MagicMock()
        client.get_local_path.return_value = "/tmp/repo"
        retriever = DiffRetriever(client)
        diff = retriever.get_diff(
            "abc123",
            "def456",
        )
        self.assertEqual(
            diff,
            "diff --git a/README.md b/README.md\n",
        )
        mock_run.assert_has_calls(
            [
                call(
                    [
                        "git",
                        "-C",
                        "/tmp/repo",
                        "rev-parse",
                        "--verify",
                        "--end-of-options",
                        "abc123^{commit}",
                    ],
                    check=True,
                    capture_output=True,
                    text=True,
                    timeout=60,
                ),
                call(
                    [
                        "git",
                        "-C",
                        "/tmp/repo",
                        "rev-parse",
                        "--verify",
                        "--end-of-options",
                        "def456^{commit}",
                    ],
                    check=True,
                    capture_output=True,
                    text=True,
                    timeout=60,
                ),
                call(
                    [
                        "git",
                        "-C",
                        "/tmp/repo",
                        "diff",
                        "abc123",
                        "def456",
                    ],
                    check=True,
                    capture_output=True,
                    timeout=300,
                ),
            ]
        )
    @patch("application.utils.harvester.diff_retriever.subprocess.run")
    def test_large_diff_raises(self, mock_run):
        mock_run.return_value = MagicMock(
            stdout=b"A" * (51 * 1024 * 1024),
        )
        client = MagicMock()
        client.get_local_path.return_value = "/tmp/repo"
        retriever = DiffRetriever(client)
        with self.assertRaises(ValueError):
            retriever.get_diff("a", "b")
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/git_repository_client_test.py‎
+1
Lines changed: 1 addition & 0 deletions
Original file line number	Diff line number	Diff line change
                "-C",
                str(client.get_local_path()),
                "checkout",
                "--",
                "main",
            ],
            check=True,
‎application/utils/harvester/__init__.py‎
+3
Lines changed: 3 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from .repository_cache import build_repository_cache_path
from .file_filter import FileFilter
from .filtering_metrics import FilteringMetricsCollector
from .diff_retriever import DiffRetriever
from .filtering_benchmark import (
    FilteringBenchmark,
    FilteringBenchmarkResult,
    "build_repository_cache_path",
    "ChunkingConfig",
    "ConfigLoaderError",
    "DiffRetriever",
    "GitRepositoryClient",
    "FileFilter",
    "FilteringMetricsCollector",
‎application/utils/harvester/checkpoint_store.py‎
+3
Lines changed: 3 additions & 0 deletions
Original file line number	Diff line number	Diff line change
    def session(self) -> Any:
        return self._session if self._session is not None else sqla.session

    def load(self, repository_id: str) -> RepositoryCheckpoint | None:
        session = self.session
        record = (
            session.query(HarvesterCheckpoint)
            .filter_by(repository_id=repository_id)
            .first()
        )
Comment on lines R18 to R25
Resolved
        if record is None:
            return None
        return RepositoryCheckpoint(
            repository_id=record.repository_id,
            last_processed_commit=record.last_processed_commit,
            branch=record.branch,
        )

    def save(self, checkpoint: RepositoryCheckpoint) -> None:
        session = self.session
        existing = (
            session.query(HarvesterCheckpoint)
            .filter_by(repository_id=checkpoint.repository_id)
            .first()
        )

        if existing is None:
            canonical_conflict = (
                session.query(HarvesterCheckpoint)
                .filter_by(
                    provider=checkpoint.provider,
                    owner=checkpoint.owner,
                    repository=checkpoint.repository,
                    branch=checkpoint.branch,
                )
                .first()
            )
Comment on lines R39 to R58
Resolved
            if canonical_conflict is not None:
                session.rollback()
                raise ValueError("duplicate canonical source identity")
‎application/utils/harvester/diff_normalizer.py‎
+47
Lines changed: 47 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import re
import unicodedata
from .models import DiffBlock
class DiffNormalizer:
    """
    Normalizes extracted diff content.
    Whitespace is collapsed, Unicode normalized,
    and empty lines removed.
    """
    def normalize_line(self, line: str) -> str:
        line = unicodedata.normalize("NFKC", line)
        line = re.sub(r"\s+", " ", line)
        return line.strip()
    def normalize(self, blocks: list[DiffBlock]) -> list[DiffBlock]:
        """
        Normalize every added line in each DiffBlock.
        """
        normalized: list[DiffBlock] = []
        for block in blocks:
            cleaned_lines: list[str] = []
            for line in block.added_lines:
                line = self.normalize_line(line)
                if not line:
                    continue
                cleaned_lines.append(line)
            normalized.append(
                DiffBlock(
                    file_path=block.file_path,
                    added_lines=cleaned_lines,
                    repository=block.repository,
                    commit_sha=block.commit_sha,
                    committed_at=block.committed_at,
                )
            )
        return normalized
‎application/utils/harvester/diff_parser.py‎
+69
Lines changed: 69 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from datetime import datetime
import re
from .models import DiffBlock
class DiffParser:
    """
    Parses unified git diffs into DiffBlock objects.
    Only added lines are extracted.
    Deleted lines and diff metadata are ignored.
    """
    def parse(
        self, diff: str, repository: str, commit_sha: str, committed_at: datetime
    ) -> list[DiffBlock]:
        """
        Convert a unified git diff into DiffBlock objects.
        """
        blocks: list[DiffBlock] = []
        current_file: str | None = None
        added_lines: list[str] = []
        for line in diff.splitlines():
            if line.startswith("diff --git"):
                if current_file is not None:
                    blocks.append(
                        DiffBlock(
                            file_path=current_file,
                            added_lines=added_lines,
                            repository=repository,
                            commit_sha=commit_sha,
                            committed_at=committed_at,
                        )
                    )
                match = re.match(r"diff --git a/(.+?) b/", line)
                current_file = match.group(1) if match else None
                added_lines = []
Comment on lines R39 to R42
Resolved
                continue
Comment on lines R27 to R44
Resolved
            if line.startswith("+++ b/") or line.startswith("+++ /dev/null"):
                continue
            if line.startswith("--- a/") or line.startswith("--- /dev/null"):
                continue
            if line.startswith("@@"):
                continue
            if line.startswith("+"):
                added_lines.append(line[1:])
        if current_file is not None:
            blocks.append(
                DiffBlock(
                    file_path=current_file,
                    added_lines=added_lines,
                    repository=repository,
                    commit_sha=commit_sha,
                    committed_at=committed_at,
                )
            )
        return blocks
‎application/utils/harvester/diff_retriever.py‎
+100
Lines changed: 100 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import logging
import subprocess
from .git_repository_client import GitRepositoryClient
logger = logging.getLogger(__name__)
class DiffRetriever:
    """
    Retrieves unified git diffs between two commits.
    This class is responsible only for retrieving raw diff text.
    Parsing and normalization are handled by downstream components.
    """
    MAX_DIFF_SIZE_BYTES = 50 * 1024 * 1024
    def __init__(self, repository_client: GitRepositoryClient) -> None:
        self.repository_client = repository_client
    def get_diff(self, base_commit: str, target_commit: str = "HEAD") -> str:
        """
        Return the unified git diff between two commits.
        Args:
            base_commit:
                Base commit SHA.
            target_commit:
                Target commit SHA or branch.
        Raises:
            subprocess.CalledProcessError:
                If git diff fails.
            ValueError:
                If the diff exceeds the configured size limit.
        """
        logger.info(
            "Retrieving diff between %s and %s",
            base_commit,
            target_commit,
        )
        base_commit = self._resolve_commit(base_commit)
        target_commit = self._resolve_commit(target_commit)
        try:
            result = subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.repository_client.get_local_path()),
                    "diff",
                    base_commit,
                    target_commit,
                ],
                check=True,
                capture_output=True,
                timeout=300,
            )
        except subprocess.CalledProcessError as exc:
            logger.error(
                "Failed to retrieve diff: %s",
                exc.stderr.decode("utf-8", errors="replace"),
            )
            raise
        diff_bytes = result.stdout
        diff_size = len(diff_bytes)
        if diff_size > self.MAX_DIFF_SIZE_BYTES:
            raise ValueError(
                f"Diff size ({diff_size} bytes) exceeds "
                f"maximum supported size ({self.MAX_DIFF_SIZE_BYTES} bytes)."
            )
        return diff_bytes.decode("utf-8", errors="replace")
    def _resolve_commit(self, commit: str) -> str:
        result = subprocess.run(
            [
                "git",
                "-C",
                str(self.repository_client.get_local_path()),
                "rev-parse",
                "--verify",
                "--end-of-options",
                f"{commit}^{{commit}}",
            ],
            check=True,
            capture_output=True,
            text=True,
            timeout=60,
        )
        return result.stdout.strip()
Comment on lines R84 to R100
Resolved
‎application/utils/harvester/git_repository_client.py‎
+1
Lines changed: 1 addition & 0 deletions
Original file line number	Diff line number	Diff line change
                    "-C",
                    str(self.local_path),
                    "checkout",
                    "--",
                    reference,
                ],
                check=True,
‎application/utils/harvester/models.py‎
+14
Lines changed: 14 additions & 0 deletions
Original file line number	Diff line number	Diff line change
    total_files: int
    retained_files: int
    filtered_files: int
@dataclass(slots=True)
class DiffBlock:
    """
    Intermediate representation of normalized additions
    extracted from a repository diff.
    """
    file_path: str
    added_lines: list[str]
    repository: str
    commit_sha: str
    committed_at: datetime | None = None
‎.gitignore‎
+2
Lines changed: 2 additions & 0 deletions
Original file line number	Diff line number	Diff line change
cres/*
### Local project management tooling
project management scripts/
.harvester_cache/


this is week 6 PR files changes section:

application/tests/harvester_test/diff_pipeline_test.py‎
+1
-9
Lines changed: 1 addition & 9 deletions
Original file line number	Diff line number	Diff line change
from datetime import UTC, datetime
import os
import subprocess
import time
import unittest
import os

from application.utils.harvester.diff_normalizer import DiffNormalizer
from application.utils.harvester.diff_parser import DiffParser
    regression guard against accidental slowdowns.
    """

    def test_pipeline_benchmark(self):
        if os.getenv("OPENCRE_RUN_NETWORK_TESTS") != "1":
            self.skipTest("Network benchmark disabled")

        client = GitRepositoryClient(
            "OWASP",
            "ASVS",
            "master",
        )
        client.sync()
        head_commit = client.get_current_commit_sha()
        previous_commit = subprocess.run(
            [
                "git",
                "-C",
                str(client.get_local_path()),
                "rev-parse",
                "HEAD~1",
            ],
            check=True,
            capture_output=True,
            text=True,
            timeout=300,
        ).stdout.strip()

        retriever = DiffRetriever(client)
        parser = DiffParser()
        normalizer = DiffNormalizer()

        start = time.perf_counter()
        diff = retriever.get_diff(
            previous_commit,
            head_commit,
        )
        blocks = parser.parse(
            diff,
            repository="OWASP/ASVS",
            commit_sha=head_commit,
            committed_at=datetime.now(UTC),
        )
        normalizer.normalize(blocks)
        elapsed = time.perf_counter() - start

        print(f"\nPipeline took {elapsed:.3f}s")
        self.assertLess(elapsed, 5)
Comment on lines R21 to R65
‎application/tests/harvester_test/diff_retriever_test.py‎
+32
Lines changed: 32 additions & 0 deletions
Original file line number	Diff line number	Diff line change
            MagicMock(stdout="def456\n"),
            MagicMock(stdout=b"diff --git a/README.md b/README.md\n"),
        ]
        mock_run.return_value = MagicMock(
            stdout="diff --git a/README.md b/README.md\n",
        )

        client = MagicMock()
        client.get_local_path.return_value = "/tmp/repo"
        with self.assertRaises(ValueError):
            retriever.get_diff("a", "b")

        mock_run.assert_called_once_with(
            [
                "git",
                "-C",
                "/tmp/repo",
                "diff",
                "abc123",
                "def456",
            ],
            capture_output=True,
            text=True,
            check=True,
            timeout=300,
        )
    @patch("application.utils.harvester.diff_retriever.subprocess.run")
    def test_large_diff_raises(self, mock_run):
        mock_run.return_value = MagicMock(
            stdout="A" * (51 * 1024 * 1024),
        )
        client = MagicMock()
        client.get_local_path.return_value = "/tmp/repo"
        retriever = DiffRetriever(client)
        with self.assertRaises(ValueError):
            retriever.get_diff("a", "b")

if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/document_builder_test.py‎
+65
Lines changed: 65 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime
from application.utils.harvester.document_builder import (
    DocumentBuilder,
)
from application.utils.harvester.models import (
    DiffBlock,
)
class DocumentBuilderTests(unittest.TestCase):
    def test_build_document(self):
        block = DiffBlock(
            file_path="README.md",
            repository="OWASP/ASVS",
            commit_sha="abc123",
            committed_at=datetime.now(),
            added_lines=["Hello"],
        )
        document = DocumentBuilder().build(
            block,
            "# Title\n\nHello",
            pipeline_run_id="20260714T120000Z",
        )
        self.assertEqual(
            document.schema_version,
            "0.2.0",
        )
        self.assertEqual(
            document.artifact_id,
            "art:OWASP/ASVS:README.md",
        )
        self.assertEqual(
            document.pipeline_run_id,
            "20260714T120000Z",
        )
        self.assertEqual(
            document.text,
            "# Title\n\nHello",
        )
        self.assertEqual(
            document.source.repository,
            "OWASP/ASVS",
        )
        self.assertEqual(
            document.locator.path,
            "README.md",
        )
        self.assertEqual(
            len(document.heading_structure),
            1,
        )
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/document_validator_test.py‎
+85
Lines changed: 85 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime
from application.utils.harvester.document_validator import (
    DocumentValidator,
)
from application.utils.harvester.models import (
    Document,
    HeadingNode,
    Locator,
    SourceInfo,
)
def make_document() -> Document:
    return Document(
        schema_version="0.2.0",
        artifact_id="art:OWASP/ASVS:README.md",
        pipeline_run_id="20260714T120000Z",
        text="# Title",
        source=SourceInfo(
            type="github",
            repository="OWASP/ASVS",
            commit_sha="abc123",
            committed_at=datetime.now(),
        ),
        locator=Locator(
            kind="repo_path",
            id="README.md",
            path="README.md",
        ),
        heading_structure=[
            HeadingNode(
                level=1,
                text="Title",
                start_line=1,
                end_line=1,
            )
        ],
        span=None,
    )
class DocumentValidatorTests(unittest.TestCase):
    def test_valid_document(self):
        validator = DocumentValidator()
        self.assertTrue(validator.validate(make_document()))
    def test_missing_artifact_id(self):
        validator = DocumentValidator()
        document = make_document()
        document.artifact_id = ""
        self.assertFalse(validator.validate(document))
    def test_missing_text(self):
        validator = DocumentValidator()
        document = make_document()
        document.text = ""
        self.assertFalse(validator.validate(document))
    def test_invalid_source_type(self):
        validator = DocumentValidator()
        document = make_document()
        document.source.type = "gitlab"
        self.assertFalse(validator.validate(document))
    def test_non_markdown_document_is_valid(self):
        validator = DocumentValidator()
        document = make_document()
        document.heading_structure = []
        document.text = '{"hello": "world"}'
        self.assertTrue(validator.validate(document))
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/git_repository_client_test.py‎
+28
Lines changed: 28 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import tempfile
from pathlib import Path

from unittest.mock import MagicMock
from application.utils.harvester.git_repository_client import (
    GitRepositoryClient,
)

        mock_run.assert_called()

    @patch("application.utils.harvester.git_repository_client.subprocess.run")
    def test_get_file_at_commit(self, mock_run):
        mock_run.return_value = MagicMock(stdout="# Hello\nWorld\n")
        client = GitRepositoryClient("OWASP", "ASVS", "master")
        client.get_local_path = MagicMock(return_value="/tmp/repo")
        content = client.get_file_at_commit("abc123", "README.md")
        self.assertEqual(content, "# Hello\nWorld\n")
        mock_run.assert_called_once_with(
            [
                "git",
                "-C",
                "/tmp/repo",
                "show",
                "abc123:README.md",
            ],
            capture_output=True,
            text=True,
            check=True,
            timeout=30,
        )

if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/heading_extractor_test.py‎
+107
Lines changed: 107 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from application.utils.harvester.heading_extractor import (
    HeadingExtractor,
)
class HeadingExtractorTests(unittest.TestCase):
    def test_single_heading(self):
        text = """
# Title
Hello
World
"""
        headings = HeadingExtractor().extract(text)
        self.assertEqual(len(headings), 1)
        self.assertEqual(headings[0].text, "Title")
        self.assertEqual(headings[0].level, 1)
        self.assertEqual(headings[0].start_line, 2)
    def test_nested_headings(self):
        text = """
# Root
## Child One
content
## Child Two
more
# Second Root
"""
        headings = HeadingExtractor().extract(text)
        self.assertEqual(len(headings), 4)
        self.assertEqual(headings[0].text, "Root")
        self.assertEqual(headings[1].text, "Child One")
        self.assertEqual(headings[2].text, "Child Two")
        self.assertEqual(headings[3].text, "Second Root")
    def test_heading_ranges(self):
        text = """
# Root
text
## Child
child
# Next
"""
        headings = HeadingExtractor().extract(text)
        self.assertEqual(headings[0].end_line, 9)
        self.assertEqual(headings[1].end_line, 9)
        self.assertEqual(headings[2].end_line, 10)
    def test_ignore_non_headings(self):
        text = """
Hello
###Heading
####NoSpace
## Valid Heading
"""
        headings = HeadingExtractor().extract(text)
        self.assertEqual(len(headings), 1)
        self.assertEqual(headings[0].text, "Valid Heading")
    def test_heading_stops_at_same_level(self):
        text = """
# Root
## A
### X
## B
    content
    """
        headings = HeadingExtractor().extract(text)
        self.assertEqual(headings[1].text, "A")
        self.assertEqual(headings[2].text, "X")
        self.assertEqual(headings[3].text, "B")
        self.assertEqual(headings[1].end_line, 7)
        self.assertEqual(headings[2].end_line, 7)
if __name__ == "__main__":
    unittest.main()
‎application/utils/harvester/__init__.py‎
+12
Lines changed: 12 additions & 0 deletions
Original file line number	Diff line number	Diff line change
    FilteringBenchmarkResult,
)

from .heading_extractor import (
    HeadingExtractor,
    HeadingNode,
)
from .document_builder import DocumentBuilder
from .document_validator import DocumentValidator
__all__ = [
    "build_repository_cache_path",
    "ChunkingConfig",
    "ConfigLoaderError",
    "DiffRetriever",
    "DocumentBuilder",
    "DocumentValidator",
    "GitRepositoryClient",
    "FileFilter",
    "FilteringMetricsCollector",
    "FilteringBenchmark",
    "FilteringBenchmarkResult",
    "HeadingExtractor",
    "HeadingNode",
    "PathRules",
    "PollingConfig",
    "RepositoryClient",
‎application/utils/harvester/artifact_id.py‎
+11
Lines changed: 11 additions & 0 deletions
Original file line number	Diff line number	Diff line change
def generate_artifact_id(repository: str, file_path: str) -> str:
    """
    Generate a stable artifact identifier for a repository file.
    Example:
        repository = "OWASP/ASVS"
        file_path = "5.0/en/0x01-Frontispiece.md"
        -> art:OWASP/ASVS:5.0/en/0x01-Frontispiece.md
    """
    return f"art:{repository}:{file_path}"
‎application/utils/harvester/diff_normalizer.py‎
+1
Lines changed: 1 addition & 0 deletions
Original file line number	Diff line number	Diff line change
import re
import unicodedata

from application.utils.harvester import repository_client
from .models import DiffBlock


‎application/utils/harvester/diff_retriever.py‎
-7
Lines changed: 0 additions & 7 deletions
Original file line number	Diff line number	Diff line change

class DiffRetriever:
    """
    Retrieves unified git diffs between two commits.
    This class is responsible only for retrieving raw diff text.
    Parsing and normalization are handled by downstream components.
    """

    MAX_DIFF_SIZE_BYTES = 50 * 1024 * 1024
        Raises:
            subprocess.CalledProcessError:
                If git diff fails.
            ValueError:
                If the diff exceeds the configured size limit.
        """
            base_commit,
            target_commit,
        )
        base_commit = self._resolve_commit(base_commit)
        target_commit = self._resolve_commit(target_commit)

        try:
            result = subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.repository_client.get_local_path()),
                    "diff",
                    base_commit,
                    target_commit,
                ],
                check=True,
                capture_output=True,
                timeout=300,
Comment on lines R46 to R58
            )
        except subprocess.CalledProcessError as exc:
            logger.error(
            raise

        diff_bytes = result.stdout
        diff_size = len(diff_bytes)
        if diff_size > self.MAX_DIFF_SIZE_BYTES:
            raise ValueError(
                f"Diff size ({diff_size} bytes) exceeds "
‎application/utils/harvester/document_builder.py‎
+46
Lines changed: 46 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from .artifact_id import generate_artifact_id
from .heading_extractor import HeadingExtractor
from .models import (
    DiffBlock,
    Document,
    Locator,
    SourceInfo,
)
class DocumentBuilder:
    """
    Builds structured Document objects from parsed diffs.
    This bridges raw git diff ingestion and downstream
    semantic chunking.
    """
    SCHEMA_VERSION = "0.2.0"
    def build(self, block: DiffBlock, full_text: str, pipeline_run_id: str) -> Document:
        artifact_id = generate_artifact_id(
            block.repository,
            block.file_path,
        )
        headings = HeadingExtractor().extract(full_text)
        return Document(
            schema_version=self.SCHEMA_VERSION,
            artifact_id=artifact_id,
            pipeline_run_id=pipeline_run_id,
            text=full_text,
            heading_structure=headings,
            source=SourceInfo(
                type="github",
                repository=block.repository,
                commit_sha=block.commit_sha,
                committed_at=block.committed_at,
            ),
            locator=Locator(
                kind="repo_path",
                id=block.file_path,
                path=block.file_path,
            ),
        )
‎application/utils/harvester/document_validator.py‎
+42
Lines changed: 42 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from .models import Document
class DocumentValidator:
    """
    Validates structured Document objects before indexing.
    Ensures every required metadata field has been populated.
    """
    def validate(self, document: Document) -> bool:
        if not document.schema_version:
            return False
        if not document.artifact_id.startswith("art:"):
            return False
        if not document.pipeline_run_id:
            return False
        if not document.text:
            return False
        if document.source.type != "github":
            return False
        if not document.source.repository:
            return False
        if not document.source.commit_sha:
            return False
        if document.source.committed_at is None:
            return False
        if document.locator.kind != "repo_path":
            return False
        if not document.locator.path:
            return False
        return True
‎application/utils/harvester/git_repository_client.py‎
+31
Lines changed: 31 additions & 0 deletions
Original file line number	Diff line number	Diff line change

    def verify_repository_integrity(self) -> bool:
        return self.is_valid_repository(self.local_path)
    def get_file_at_commit(self, commit_sha: str, file_path: str) -> str:
        """
        Retrieve the contents of a file at a specific commit.
        Args:
            commit_sha:
                Commit to read from.
            file_path:
                Repository-relative file path.
        Returns:
            File contents as a string.
        """
        result = subprocess.run(
            [
                "git",
                "-C",
                str(self.get_local_path()),
                "show",
                f"{commit_sha}:{file_path}",
            ],
            capture_output=True,
            text=True,
            check=True,
            timeout=30,
        )
        return result.stdout
‎application/utils/harvester/heading_extractor.py‎
+47
Lines changed: 47 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from dataclasses import dataclass
from .models import HeadingNode
class HeadingExtractor:
    """
    Extracts Markdown headings and their line ranges.
    Heading ranges extend until the next heading of the same
    or higher level, or the end of the document.
    """
    def extract(self, text: str) -> list[HeadingNode]:
        lines = text.splitlines()
        headings: list[HeadingNode] = []
        for line_number, line in enumerate(lines, start=1):
            stripped = line.lstrip()
            if not stripped.startswith("#"):
                continue
            hashes = len(stripped) - len(stripped.lstrip("#"))
            if hashes == 0:
                continue
            if len(stripped) > hashes and stripped[hashes] != " ":
                continue
            headings.append(
                HeadingNode(
                    level=hashes,
                    text=stripped[hashes:].strip(),
                    start_line=line_number,
                    end_line=len(lines),
                )
            )
Comment on lines R18 to R39
        for index, heading in enumerate(headings):
            for next_heading in headings[index + 1 :]:
                if next_heading.level <= heading.level:
                    heading.end_line = next_heading.start_line - 1
                    break
        return headings
‎application/utils/harvester/models.py‎
+46
Lines changed: 46 additions & 0 deletions
Original file line number	Diff line number	Diff line change
    repository: str
    commit_sha: str
    committed_at: datetime | None = None
@dataclass(slots=True)
class SourceInfo:
    type: str
    repository: str
    commit_sha: str
    committed_at: datetime | None
@dataclass(slots=True)
class Locator:
    kind: str
    id: str
    path: str
@dataclass(slots=True)
class SpanInfo:
    heading_path: list[str]
    start_line: int
    end_line: int
    index: int | None = None
    total: int | None = None
    start_char_idx: int | None = None
    end_char_idx: int | None = None
@dataclass(slots=True)
class HeadingNode:
    level: int
    text: str
    start_line: int
    end_line: int
@dataclass(slots=True)
class Document:
    schema_version: str
    artifact_id: str
    pipeline_run_id: str
    text: str
    source: SourceInfo
    locator: Locator
    heading_structure: list[HeadingNode]
    span: SpanInfo | None = None

this much context is enough to write the first technical blog for the mid term gsoc blog

this is week 7 and 8 PR files changes section:

application/cmd/cre_main.py‎
+19
Lines changed: 19 additions & 0 deletions
Original file line number	Diff line number	Diff line change
        logger.info("Exported %s rows to %s", rows, csv_out)
        return

    if getattr(args, "run_harvester", False):
        import sys
        from application import sqla
        from application.utils.harvester.pipeline import run_harvester
        db_connect(args.cache_file)
        repos_yaml = getattr(args, "harvester_repos_yaml", "") or None
        summary = run_harvester(
            sqla.session,
            args.run_id.strip(),
            repos_yaml=repos_yaml,
            dry_run=getattr(args, "harvester_dry_run", False),
        )
        print(summary.to_json())
        if summary.status == "degraded":
            sys.exit(1)
        return
    if getattr(args, "run_noise_filter", False):
        import sys

‎application/tests/harvester_test/artifact_registry_test.py‎
+99
Lines changed: 99 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime
from application.utils.harvester.artifact_registry import ArtifactRegistry
from application.utils.harvester.models import ArtifactRegistryRecord
class ArtifactRegistryTests(unittest.TestCase):
    def test_insert_record(self):
        registry = ArtifactRegistry()
        record = ArtifactRegistryRecord(
            artifact_id="art:test:file.md",
            repository="OWASP/ASVS",
            locator_path="file.md",
            content_hash="abc",
            last_commit_sha="123",
            last_pipeline_run="run1",
            last_processed_at=datetime.now(),
            status="new",
        )
        registry.upsert(record)
        self.assertTrue(registry.exists(record.artifact_id))
    def test_get_record(self):
        registry = ArtifactRegistry()
        record = ArtifactRegistryRecord(
            artifact_id="art:test:file.md",
            repository="OWASP/ASVS",
            locator_path="file.md",
            content_hash="abc",
            last_commit_sha="123",
            last_pipeline_run="run1",
            last_processed_at=datetime.now(),
            status="new",
        )
        registry.upsert(record)
        stored = registry.get(record.artifact_id)
        assert stored is not None
        self.assertEqual(stored.content_hash, "abc")
    def test_update_record(self):
        registry = ArtifactRegistry()
        record = ArtifactRegistryRecord(
            artifact_id="art:test:file.md",
            repository="OWASP/ASVS",
            locator_path="file.md",
            content_hash="abc",
            last_commit_sha="123",
            last_pipeline_run="run1",
            last_processed_at=datetime.now(),
            status="new",
        )
        registry.upsert(record)
        record.content_hash = "xyz"
        record.status = "updated"
        registry.upsert(record)
        stored = registry.get(record.artifact_id)
        assert stored is not None
        self.assertEqual(stored.content_hash, "xyz")
        self.assertEqual(stored.status, "updated")
    def test_all_records(self):
        registry = ArtifactRegistry()
        for i in range(3):
            registry.upsert(
                ArtifactRegistryRecord(
                    artifact_id=f"art:{i}",
                    repository="repo",
                    locator_path=f"{i}.md",
                    content_hash=str(i),
                    last_commit_sha="sha",
                    last_pipeline_run="run",
                    last_processed_at=datetime.now(),
                    status="new",
                )
            )
        self.assertEqual(
            len(registry.all()),
            3,
        )
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/checkpoint_manager_test.py‎
+68
Lines changed: 68 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime
from application.utils.harvester.checkpoint_manager import CheckpointManager
from application.utils.harvester.models import CheckpointRecord
class CheckpointManagerTests(unittest.TestCase):
    def test_save_checkpoint(self):
        manager = CheckpointManager()
        checkpoint = CheckpointRecord(
            repository="OWASP/ASVS",
            pipeline_run_id="run1",
            last_processed_commit="abc123",
            status="running",
            updated_at=datetime.now(),
        )
        manager.save(checkpoint)
        self.assertIsNotNone(manager.get("OWASP/ASVS"))
    def test_update_commit(self):
        manager = CheckpointManager()
        checkpoint = CheckpointRecord(
            repository="OWASP/ASVS",
            pipeline_run_id="run1",
            last_processed_commit="abc123",
            status="running",
            updated_at=datetime.now(),
        )
        manager.save(checkpoint)
        manager.update_commit(
            "OWASP/ASVS",
            "deadbeef",
        )
        stored = manager.get("OWASP/ASVS")
        assert stored is not None
        self.assertEqual(stored.last_processed_commit, "deadbeef")
    def test_mark_completed(self):
        manager = CheckpointManager()
        checkpoint = CheckpointRecord(
            repository="OWASP/ASVS",
            pipeline_run_id="run1",
            last_processed_commit="abc123",
            status="running",
            updated_at=datetime.now(),
        )
        manager.save(checkpoint)
        manager.mark_completed("OWASP/ASVS")
        stored = manager.get("OWASP/ASVS")
        assert stored is not None
        self.assertEqual(stored.status, "completed")
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/chunk_pipeline_test.py‎
+36
Lines changed: 36 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from unittest.mock import Mock
from application.utils.harvester.chunk_pipeline import DocumentChunkPipeline
from application.utils.harvester.models import Document, IngestChunkRecord
class DocumentChunkPipelineTests(unittest.TestCase):
    def test_invalid_record_is_rejected_before_return(self):
        document = Mock(spec=Document)
        document.text = "Some document text."
        chunker = Mock()
        chunker.chunk.return_value = ["chunk"]
        record_builder = Mock()
        invalid_record = Mock(spec=IngestChunkRecord)
        record_builder.build.return_value = [invalid_record]
        validator = Mock()
        validator.validate.side_effect = ValueError("invalid chunk record")
        pipeline = DocumentChunkPipeline(
            chunker=chunker,
            record_builder=record_builder,
            validator=validator,
        )
        with self.assertRaisesRegex(ValueError, "invalid chunk record"):
            pipeline.chunk(document)
        validator.validate.assert_called_once_with(invalid_record)
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/chunk_record_builder_test.py‎
+75
Lines changed: 75 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime, timezone
from application.utils.harvester.chunk_record_builder import ChunkRecordBuilder
from application.utils.harvester.chunk_record_validator import (
    ChunkRecordValidator,
    ingest_record_to_payload,
)
from application.utils.harvester.chunker import ChunkInfo
from application.utils.harvester.models import (
    Document,
    HeadingNode,
    Locator,
    SourceInfo,
)
from application.utils.noise_filter.schemas import ChangeRecord
class ChunkRecordBuilderTests(unittest.TestCase):
    def _document(self, text: str, headings: list[HeadingNode]) -> Document:
        return Document(
            schema_version="0.2.0",
            artifact_id="art:OWASP/ASVS:README.md",
            pipeline_run_id="run-1",
            text=text,
            source=SourceInfo(
                type="github",
                repository="OWASP/ASVS",
                commit_sha="abc1234deadbeef",
                committed_at=datetime(2026, 2, 1, 1, 0, 0, tzinfo=timezone.utc),
            ),
            locator=Locator(
                kind="repo_path",
                id="README.md",
                path="README.md",
            ),
            heading_structure=headings,
        )
    def test_builds_change_record_shaped_payload(self) -> None:
        text = "# Root\n\nFirst paragraph."
        document = self._document(
            text,
            [HeadingNode(level=1, text="Root", start_line=1, end_line=3)],
        )
        chunk = ChunkInfo(text=text, start_char_idx=0, end_char_idx=len(text))
        records = ChunkRecordBuilder().build(document, [chunk])
        self.assertEqual(len(records), 1)
        record = records[0]
        self.assertEqual(record.chunk_id, "chk:art:OWASP/ASVS:README.md:0")
        self.assertEqual(record.pipeline_run_id, "run-1")
        self.assertEqual(record.source_repo, "OWASP/ASVS")
        self.assertEqual(record.locator_path, "README.md")
        self.assertEqual(record.span.heading_path, ["Root"])
        ChunkRecordValidator().validate(record)
        payload = ingest_record_to_payload(record)
        ChangeRecord.model_validate(payload)
    def test_indexes_multiple_chunks(self) -> None:
        text = "AAAA\n\nBBBB"
        document = self._document(text, [])
        chunks = [
            ChunkInfo(text="AAAA\n\n", start_char_idx=0, end_char_idx=6),
            ChunkInfo(text="BBBB", start_char_idx=6, end_char_idx=10),
        ]
        records = ChunkRecordBuilder().build(document, chunks)
        self.assertEqual(records[0].span.index, 0)
        self.assertEqual(records[0].span.total, 2)
        self.assertEqual(records[1].span.index, 1)
        self.assertEqual(records[1].chunk_id, "chk:art:OWASP/ASVS:README.md:1")
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/chunk_record_validator_test.py‎
+89
Lines changed: 89 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from application.utils.harvester.chunk_record_validator import (
    ChunkRecordValidator,
)
from application.utils.harvester.models import (
    IngestChunkRecord,
    SpanInfo,
)
def valid_record() -> IngestChunkRecord:
    return IngestChunkRecord(
        schema_version="0.2.0",
        chunk_id="chk:art:OWASP/OpenCRE:README.md:0",
        artifact_id="art:OWASP/OpenCRE:README.md",
        pipeline_run_id="run-1",
        text="Some valid chunk content.",
        span=SpanInfo(
            heading_path=["Introduction"],
            start_line=1,
            end_line=2,
            index=0,
            total=1,
            start_char_idx=0,
            end_char_idx=25,
        ),
        source_type="github",
        source_repo="OWASP/OpenCRE",
        source_commit_sha="abc1234deadbeef",
        source_committed_at="2026-02-01T01:00:00Z",
        locator_kind="repo_path",
        locator_id="README.md",
        locator_path="README.md",
    )
class ChunkRecordValidatorTests(unittest.TestCase):
    def test_valid_record(self) -> None:
        ChunkRecordValidator().validate(valid_record())
    def test_empty_text_is_rejected(self) -> None:
        record = valid_record()
        record.text = "   "
        with self.assertRaises(ValueError):
            ChunkRecordValidator().validate(record)
    def test_invalid_chunk_id_is_rejected(self) -> None:
        record = valid_record()
        record.chunk_id = "invalid-id"
        with self.assertRaises(ValueError):
            ChunkRecordValidator().validate(record)
    def test_missing_span_index_is_rejected(self) -> None:
        record = valid_record()
        record.span.index = None
        with self.assertRaises(ValueError):
            ChunkRecordValidator().validate(record)
    def test_index_outside_total_is_rejected(self) -> None:
        record = valid_record()
        record.span.index = 1
        record.span.total = 1
        with self.assertRaises(ValueError):
            ChunkRecordValidator().validate(record)
    def test_invalid_character_range_is_rejected(self) -> None:
        record = valid_record()
        record.span.start_char_idx = 25
        record.span.end_char_idx = 10
        with self.assertRaises(ValueError):
            ChunkRecordValidator().validate(record)
    def test_negative_character_offsets_are_rejected(self) -> None:
        record = valid_record()
        record.span.start_char_idx = -1
        with self.assertRaises(ValueError):
            ChunkRecordValidator().validate(record)
    def test_invalid_line_range_is_rejected(self) -> None:
        record = valid_record()
        record.span.start_line = 5
        record.span.end_line = 3
        with self.assertRaises(ValueError):
            ChunkRecordValidator().validate(record)
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/chunker_test.py‎
+81
Lines changed: 81 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime, timezone
from application.utils.harvester.chunker import ChunkInfo, DocumentChunker
from application.utils.harvester.models import (
    Document,
    HeadingNode,
    Locator,
    SourceInfo,
)
from application.utils.harvester.schemas import ChunkingConfig
def _doc(text: str, headings: list[HeadingNode] | None = None) -> Document:
    return Document(
        schema_version="0.2.0",
        artifact_id="art:OWASP/ASVS:README.md",
        pipeline_run_id="run-1",
        text=text,
        source=SourceInfo(
            type="github",
            repository="OWASP/ASVS",
            commit_sha="abc1234",
            committed_at=datetime(2026, 1, 1, tzinfo=timezone.utc),
        ),
        locator=Locator(kind="repo_path", id="README.md", path="README.md"),
        heading_structure=headings or [],
    )
class DocumentChunkerTests(unittest.TestCase):
    def test_empty_document_returns_no_chunks(self) -> None:
        chunker = DocumentChunker(
            ChunkingConfig(strategy="fixed_size", max_tokens=100, overlap_tokens=10)
        )
        self.assertEqual(chunker.chunk(""), [])
    def test_whitespace_document_returns_no_chunks(self) -> None:
        chunker = DocumentChunker(
            ChunkingConfig(strategy="fixed_size", max_tokens=100, overlap_tokens=10)
        )
        self.assertEqual(chunker.chunk("   \n\n  "), [])
    def test_markdown_heading_keeps_sections_separate(self) -> None:
        text = "# Auth\n\nAAA\n\n# Storage\n\nBBB\n"
        document = _doc(
            text,
            [
                HeadingNode(level=1, text="Auth", start_line=1, end_line=3),
                HeadingNode(level=1, text="Storage", start_line=5, end_line=7),
            ],
        )
        chunker = DocumentChunker(
            ChunkingConfig(
                strategy="markdown_heading", max_tokens=500, overlap_tokens=10
            )
        )
        chunks = chunker.chunk(text, document=document)
        self.assertGreaterEqual(len(chunks), 2)
        joined = "".join(c.text for c in chunks)
        self.assertIn("AAA", joined)
        self.assertIn("BBB", joined)
        # Storage content must not start before its heading offset.
        storage_start = text.index("# Storage")
        storage_chunks = [c for c in chunks if c.start_char_idx >= storage_start]
        self.assertTrue(any("BBB" in c.text for c in storage_chunks))
    def test_fixed_size_respects_budget(self) -> None:
        text = ("word " * 200).strip()
        chunker = DocumentChunker(
            ChunkingConfig(strategy="fixed_size", max_tokens=20, overlap_tokens=5)
        )
        chunks = chunker.chunk(text)
        self.assertGreater(len(chunks), 1)
        for chunk in chunks:
            self.assertIsInstance(chunk, ChunkInfo)
            self.assertLessEqual(len(chunk.text), 20 * 4 + 5)
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/chunking_benchmark_test.py‎
+49
Lines changed: 49 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import os
import time
import unittest
from application.utils.harvester.chunker import DocumentChunker
@unittest.skipUnless(
    os.getenv("RUN_CHUNKING_BENCHMARK") == "1",
    "Chunking benchmark requires RUN_CHUNKING_BENCHMARK=1",
)
class ChunkingBenchmarkTests(unittest.TestCase):
    def test_chunking_benchmark(self):
        text = (
            "# Introduction\n\n" + "Python functions define reusable behavior. "
            "Variables store values and expressions compute results. " * 20
            + "\n\n## Architecture\n\n"
            + "The architecture separates ingestion from retrieval. "
            "Each component has a clearly defined responsibility. " * 20
            + "\n\n## Storage\n\n"
            + "Persistent state is protected by transactional operations. "
            "Commit and rollback provide atomicity and consistency. " * 20
        )
        start = time.perf_counter()
        chunks = DocumentChunker().chunk(text)
        elapsed = time.perf_counter() - start
        self.assertGreater(len(chunks), 0)
        self.assertTrue(all(chunk.text.strip() for chunk in chunks))
        self.assertTrue(
            all(
                0 <= chunk.start_char_idx < chunk.end_char_idx <= len(text)
                for chunk in chunks
            )
        )
        print(
            f"\nChunking benchmark: "
            f"{len(chunks)} chunks, "
            f"{elapsed:.3f}s, "
            f"input={len(text)} chars"
        )
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/content_hash_test.py‎
+35
Lines changed: 35 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from application.utils.harvester.content_hash import (
    generate_content_hash,
)
class ContentHashTests(unittest.TestCase):
    def test_same_text_same_hash(self):
        text = "Hello World"
        self.assertEqual(
            generate_content_hash(text),
            generate_content_hash(text),
        )
    def test_different_text_different_hash(self):
        self.assertNotEqual(
            generate_content_hash("Hello"),
            generate_content_hash("World"),
        )
    def test_empty_string(self):
        digest = generate_content_hash("")
        self.assertEqual(len(digest), 64)
    def test_hash_is_hex(self):
        digest = generate_content_hash("OpenCRE")
        int(digest, 16)
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/deduplication_metrics_test.py‎
+35
Lines changed: 35 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from application.utils.harvester.deduplication_metrics import DeduplicationMetrics
from application.utils.harvester.models import DeduplicationStatus
class DeduplicationMetricsTests(unittest.TestCase):
    def test_records_new_document(self):
        metrics = DeduplicationMetrics()
        metrics.record(DeduplicationStatus.NEW)
        self.assertEqual(metrics.total_artifacts_scanned, 1)
        self.assertEqual(metrics.artifacts_new, 1)
        self.assertEqual(metrics.artifacts_emitted, 1)
    def test_records_updated_document(self):
        metrics = DeduplicationMetrics()
        metrics.record(DeduplicationStatus.UPDATED)
        self.assertEqual(metrics.artifacts_updated, 1)
        self.assertEqual(metrics.artifacts_emitted, 1)
    def test_records_unchanged_document(self):
        metrics = DeduplicationMetrics()
        metrics.record(DeduplicationStatus.UNCHANGED)
        self.assertEqual(metrics.artifacts_unchanged, 1)
        self.assertEqual(metrics.artifacts_skipped, 1)
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/diff_normalizer_test.py‎
-1
Lines changed: 0 additions & 1 deletion
Original file line number	Diff line number	Diff line change
    DiffBlock,
)

DIFF_METADATA = {
    "repository": "OWASP/ASVS",
    "commit_sha": "abc123",
‎application/tests/harvester_test/diff_parser_test.py‎
+5
Lines changed: 5 additions & 0 deletions
Original file line number	Diff line number	Diff line change
TEST_COMMITTED_AT = datetime.now(UTC)


TEST_REPOSITORY = "OWASP/ASVS"
TEST_COMMIT_SHA = "abc123"
TEST_COMMITTED_AT = datetime.now(UTC)
class DiffParserTests(unittest.TestCase):
    def test_single_file_diff(self):
        parser = DiffParser()
‎application/tests/harvester_test/diff_pipeline_test.py‎
+9
-2
Lines changed: 9 additions & 2 deletions
Original file line number	Diff line number	Diff line change
from datetime import UTC, datetime
import os
import subprocess
import time
import unittest
from datetime import UTC, datetime

from application.utils.harvester.diff_normalizer import DiffNormalizer
from application.utils.harvester.diff_parser import DiffParser
from application.utils.harvester.diff_retriever import DiffRetriever
from application.utils.harvester.git_repository_client import GitRepositoryClient


@unittest.skipUnless(
    os.getenv("RUN_DIFF_PIPELINE_BENCHMARK") == "1",
    "Diff pipeline benchmark requires RUN_DIFF_PIPELINE_BENCHMARK=1",
)
class DiffPipelineBenchmark(unittest.TestCase):
    """
    Simple benchmark to ensure the complete diff pipeline remains fast.
    This is not intended as a strict performance benchmark, only as a
    regression guard against accidental slowdowns.
    """

        print(f"\nPipeline took {elapsed:.3f}s")
        self.assertLess(elapsed, 5)
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/diff_retriever_test.py‎
+1
-2
Lines changed: 1 addition & 2 deletions
Original file line number	Diff line number	Diff line change
import unittest
from unittest.mock import MagicMock
from unittest.mock import patch
from unittest.mock import call
from unittest.mock import patch

from application.utils.harvester.diff_retriever import (
    DiffRetriever,
        client.get_local_path.return_value = "/tmp/repo"

        retriever = DiffRetriever(client)
        diff = retriever.get_diff(
            "abc123",
            "def456",
‎application/tests/harvester_test/document_deduplicator_test.py‎
+77
Lines changed: 77 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime
from application.utils.harvester.artifact_registry import ArtifactRegistry
from application.utils.harvester.document_deduplicator import (
    DocumentDeduplicator,
)
from application.utils.harvester.models import (
    DeduplicationStatus,
    Document,
    Locator,
    SourceInfo,
)
class DocumentDeduplicatorTests(unittest.TestCase):
    def create_document(self, text: str) -> Document:
        return Document(
            schema_version="0.2.0",
            artifact_id="art:test:file.md",
            pipeline_run_id="run1",
            text=text,
            source=SourceInfo(
                type="github",
                repository="OWASP/ASVS",
                commit_sha="abc123",
                committed_at=datetime.now(),
            ),
            locator=Locator(
                kind="repo_path",
                id="file.md",
                path="file.md",
            ),
            heading_structure=[],
            span=None,
        )
    def test_new_document(self):
        registry = ArtifactRegistry()
        deduplicator = DocumentDeduplicator(registry)
        result = deduplicator.process(self.create_document("hello"))
        self.assertEqual(result, DeduplicationStatus.NEW)
    def test_unchanged_document_refreshes_commit_metadata(self) -> None:
        registry = ArtifactRegistry()
        deduplicator = DocumentDeduplicator(registry)
        first = self.create_document("hello")
        first.source.commit_sha = "aaa111"
        deduplicator.process(first)
        second = self.create_document("hello")
        second.source.commit_sha = "bbb222"
        second.pipeline_run_id = "run2"
        result = deduplicator.process(second)
        self.assertEqual(result, DeduplicationStatus.UNCHANGED)
        stored = registry.get(second.artifact_id)
        assert stored is not None
        self.assertEqual(stored.last_commit_sha, "bbb222")
        self.assertEqual(stored.last_pipeline_run, "run2")
    def test_updated_document(self):
        registry = ArtifactRegistry()
        deduplicator = DocumentDeduplicator(registry)
        deduplicator.process(self.create_document("hello"))
        result = deduplicator.process(
            self.create_document("changed"),
        )
        self.assertEqual(result, DeduplicationStatus.UPDATED)
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/document_validator_test.py‎
+8
-5
Lines changed: 8 additions & 5 deletions
Original file line number	Diff line number	Diff line change

        self.assertFalse(validator.validate(document))

    def test_non_markdown_document_is_valid(self):
    def test_reject_bare_art_prefix(self) -> None:
        validator = DocumentValidator()
        document = make_document()
        document.heading_structure = []
        document.text = '{"hello": "world"}'
        document.artifact_id = "art:"
        self.assertFalse(validator.validate(document))

        self.assertTrue(validator.validate(document))
    def test_reject_locator_id_mismatch(self) -> None:
        validator = DocumentValidator()
        document = make_document()
        document.locator.id = "other.md"
        self.assertFalse(validator.validate(document))


if __name__ == "__main__":
‎application/tests/harvester_test/git_repository_client_integration_test.py‎
+18
-6
Lines changed: 18 additions & 6 deletions
Original file line number	Diff line number	Diff line change


def git(*args, cwd=None):
    # Disable hooks so CI/sandbox environments that block hook writes still work.
    subprocess.run(
        ["git", *args],
        ["git", "-c", "core.hooksPath=/dev/null", *args],
        cwd=cwd,
        check=True,
        capture_output=True,

def git_output(*args, cwd=None):
    return subprocess.run(
        ["git", *args],
        ["git", "-c", "core.hooksPath=/dev/null", *args],
        cwd=cwd,
        check=True,
        capture_output=True,

class GitRepositoryClientIntegrationTests(unittest.TestCase):
    def setUp(self):
        self.tempdir = tempfile.TemporaryDirectory()
        # Keep temp dirs inside the repo so sandboxed runners can write hooks/objects.
        self._tmpdir_root = Path(__file__).resolve().parents[3] / "tmp" / "harvester-it"
        self._tmpdir_root.mkdir(parents=True, exist_ok=True)
        self.tempdir = tempfile.TemporaryDirectory(dir=self._tmpdir_root)
        self.root = Path(self.tempdir.name)

        self.remote = self.root / "remote.git"
        self.work = self.root / "work"
        self.cache = self.root / "cache"

        git("init", "--bare", self.remote)
        git("clone", self.remote, self.work)
        git("init", "--bare", str(self.remote))
        try:
            git("clone", str(self.remote), str(self.work))
        except subprocess.CalledProcessError as exc:
            err = (exc.stderr or "") + (exc.stdout or "")
            if "Operation not permitted" in err:
                raise unittest.SkipTest(
                    "environment blocks git clone/config writes (sandbox)"
                ) from exc
            raise

        git("config", "user.name", "Test User", cwd=self.work)
        git("config", "user.email", "test@example.com", cwd=self.work)
‎application/tests/harvester_test/git_repository_client_test.py‎
+6
-17
Lines changed: 6 additions & 17 deletions
Original file line number	Diff line number	Diff line change
                "-C",
                str(client.get_local_path()),
                "checkout",
                "--",
                "main",
            ],
            check=True,

    @patch("application.utils.harvester.git_repository_client.subprocess.run")
    def test_get_file_at_commit(self, mock_run):
        mock_run.return_value = MagicMock(stdout="# Hello\nWorld\n")
        mock_run.side_effect = [
            MagicMock(stdout="42\n"),
            MagicMock(stdout="# Hello\nWorld\n"),
        ]

        client = GitRepositoryClient("OWASP", "ASVS", "master")

        content = client.get_file_at_commit("abc123", "README.md")

        self.assertEqual(content, "# Hello\nWorld\n")
        mock_run.assert_called_once_with(
            [
                "git",
                "-C",
                "/tmp/repo",
                "show",
                "abc123:README.md",
            ],
            capture_output=True,
            text=True,
            check=True,
            timeout=30,
        )
        self.assertEqual(mock_run.call_count, 2)
        self.assertIn("--end-of-options", mock_run.call_args_list[1].args[0])


if __name__ == "__main__":
‎application/tests/harvester_test/harvest_pipeline_test.py‎
+187
Lines changed: 187 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime, timezone
from unittest.mock import Mock
from application import create_app, sqla
from application.database.db import HarvestInput
from application.utils.harvester.chunk_pipeline import DocumentChunkPipeline
from application.utils.harvester.harvest_writer import write_harvest_input
from application.utils.harvester.models import (
    Document,
    HeadingNode,
    IngestChunkRecord,
    Locator,
    SourceInfo,
    SpanInfo,
)
from application.utils.harvester.schemas import ChunkingConfig
from application.utils.noise_filter.schemas import ChangeRecord
from application.utils.oie_orchestrator import run_oie_pipeline
class HarvestWriterTests(unittest.TestCase):
    def setUp(self) -> None:
        self.app = create_app(mode="test")
        self.app_context = self.app.app_context()
        self.app_context.push()
        sqla.create_all()
    def tearDown(self) -> None:
        sqla.session.remove()
        sqla.drop_all()
        self.app_context.pop()
    def test_writes_pending_change_records(self) -> None:
        record = IngestChunkRecord(
            schema_version="0.2.0",
            chunk_id="chk:art:OWASP/ASVS:a.md:0",
            artifact_id="art:OWASP/ASVS:a.md",
            pipeline_run_id="run-xyz",
            text="Authentication should use MFA",
            span=SpanInfo(
                heading_path=["Auth"],
                start_line=1,
                end_line=1,
                index=0,
                total=1,
                start_char_idx=0,
                end_char_idx=30,
            ),
            source_type="github",
            source_repo="OWASP/ASVS",
            source_commit_sha="abc1234deadbeef",
            source_committed_at="2026-02-01T01:00:00Z",
            locator_kind="repo_path",
            locator_id="a.md",
            locator_path="a.md",
        )
        written = write_harvest_input(sqla.session, "run-xyz", [record])
        self.assertEqual(written, 1)
        row = sqla.session.query(HarvestInput).one()
        self.assertEqual(row.pipeline_run_id, "run-xyz")
        self.assertEqual(row.status, "pending")
        ChangeRecord.model_validate(row.payload)
        self.assertEqual(row.payload["pipeline_run_id"], "run-xyz")
class DocumentChunkPipelineIntegrationTests(unittest.TestCase):
    def test_emits_valid_change_records(self) -> None:
        text = "# Auth\n\nUse MFA everywhere.\n"
        document = Document(
            schema_version="0.2.0",
            artifact_id="art:OWASP/ASVS:auth.md",
            pipeline_run_id="run-1",
            text=text,
            source=SourceInfo(
                type="github",
                repository="OWASP/ASVS",
                commit_sha="abc1234deadbeef",
                committed_at=datetime(2026, 2, 1, tzinfo=timezone.utc),
            ),
            locator=Locator(kind="repo_path", id="auth.md", path="auth.md"),
            heading_structure=[
                HeadingNode(level=1, text="Auth", start_line=1, end_line=3)
            ],
        )
        pipeline = DocumentChunkPipeline(
            chunking=ChunkingConfig(
                strategy="markdown_heading", max_tokens=200, overlap_tokens=10
            )
        )
        records = pipeline.chunk(document)
        self.assertGreaterEqual(len(records), 1)
        for record in records:
            ChangeRecord.model_validate(
                {
                    "schema_version": record.schema_version,
                    "chunk_id": record.chunk_id,
                    "artifact_id": record.artifact_id,
                    "pipeline_run_id": record.pipeline_run_id,
                    "text": record.text,
                    "span": {
                        "index": record.span.index,
                        "total": record.span.total,
                        "heading_path": record.span.heading_path,
                        "start_char_idx": record.span.start_char_idx,
                        "end_char_idx": record.span.end_char_idx,
                        "start_line": record.span.start_line,
                        "end_line": record.span.end_line,
                    },
                    "source": {
                        "type": record.source_type,
                        "repo": record.source_repo,
                        "commit_sha": record.source_commit_sha,
                        "committed_at": record.source_committed_at,
                    },
                    "locator": {
                        "kind": record.locator_kind,
                        "id": record.locator_id,
                        "path": record.locator_path,
                    },
                }
            )
class OieOrchestratorTests(unittest.TestCase):
    def test_sequences_a_b_c_and_stops_on_a_error(self) -> None:
        a_calls = []
        def run_a(session, run_id, **kwargs):
            a_calls.append(run_id)
            summary = Mock()
            summary.status = "degraded"
            summary.to_json.return_value = '{"status":"degraded"}'
            return summary
        b_calls = []
        def run_b(session, run_id, **kwargs):
            b_calls.append(run_id)
            summary = Mock()
            summary.status = "ok"
            summary.to_json.return_value = '{"status":"ok"}'
            return summary
        result = run_oie_pipeline(
            cache_file="sqlite://",
            pipeline_run_id="run-1",
            dry_run=True,
            sync_repos=False,
            run_harvester_fn=run_a,
            run_noise_filter_fn=run_b,
            run_librarian_queue_fn=lambda *a, **k: {"ok": True},
        )
        self.assertEqual(a_calls, ["run-1"])
        self.assertEqual(b_calls, [])
        self.assertFalse(result.to_dict()["ok"])
        self.assertEqual(result.stages[0].status, "error")
    def test_runs_all_stages_when_ok(self) -> None:
        def ok_summary(*args, **kwargs):
            summary = Mock()
            summary.status = "ok"
            summary.to_json.return_value = '{"status":"ok"}'
            return summary
        result = run_oie_pipeline(
            cache_file="sqlite://",
            pipeline_run_id="run-2",
            dry_run=True,
            sync_repos=False,
            run_harvester_fn=ok_summary,
            run_noise_filter_fn=ok_summary,
            run_librarian_queue_fn=lambda *a, **k: {"status": "ok"},
        )
        self.assertTrue(result.to_dict()["ok"])
        self.assertEqual(
            [s.name for s in result.stages],
            [
                "module_a_harvester",
                "module_b_noise_filter",
                "module_c_librarian",
            ],
        )
if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/heading_extractor_test.py‎
+22
Lines changed: 22 additions & 0 deletions
Original file line number	Diff line number	Diff line change
        self.assertEqual(headings[1].end_line, 7)
        self.assertEqual(headings[2].end_line, 7)

    def test_ignores_headings_inside_fenced_code(self) -> None:
        text = """# Real
```
# Not A Heading
```
## Also Real
"""
        headings = HeadingExtractor().extract(text)
        self.assertEqual([h.text for h in headings], ["Real", "Also Real"])
    def test_ignores_indented_code_headings(self) -> None:
        text = """# Real
    # Indented Fake
## Also Real
"""
        headings = HeadingExtractor().extract(text)
        self.assertEqual([h.text for h in headings], ["Real", "Also Real"])

if __name__ == "__main__":
    unittest.main()
‎application/tests/harvester_test/incremental_pipeline_test.py‎
+80
Lines changed: 80 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import unittest
from datetime import datetime
from unittest.mock import Mock
from application.utils.harvester.artifact_registry import ArtifactRegistry
from application.utils.harvester.document_deduplicator import DocumentDeduplicator
from application.utils.harvester.incremental_pipeline import IncrementalPipeline
from application.utils.harvester.models import Document, Locator, SourceInfo
class IncrementalPipelineTests(unittest.TestCase):
    def make_document(self, text: str, commit_sha: str = "abc1234") -> Document:
        return Document(
            schema_version="0.2.0",
            artifact_id="art:OWASP/ASVS:file.md",
            pipeline_run_id="run1",
            text=text,
            source=SourceInfo(
                type="github",
                repository="OWASP/ASVS",
                commit_sha=commit_sha,
                committed_at=datetime.now(),
            ),
            locator=Locator(
                kind="repo_path",
                id="file.md",
                path="file.md",
            ),
            heading_structure=[],
            span=None,
        )
    def test_only_new_and_updated_are_emitted(self) -> None:
        registry = ArtifactRegistry()
        dedup = DocumentDeduplicator(registry)
        store = Mock()
        pipeline = IncrementalPipeline(
            deduplicator=dedup,
            checkpoint_store=store,
            provider="github",
            owner="OWASP",
            repository_name="ASVS",
            branch="master",
            repository_id="owasp-asvs",
        )
        docs = [
            self.make_document("hello"),
            self.make_document("hello"),
            self.make_document("changed"),
        ]
        emitted = pipeline.process(
            "OWASP/ASVS",
            "run1",
            docs,
            last_processed_commit="abc1234",
        )
        self.assertEqual(len(emitted), 2)
        store.save.assert_called_once()
        saved = store.save.call_args[0][0]
        self.assertEqual(saved.last_processed_commit, "abc1234")
    def test_rejects_empty_checkpoint_commit(self) -> None:
        pipeline = IncrementalPipeline(
            checkpoint_store=Mock(),
            owner="OWASP",
            repository_name="ASVS",
            repository_id="owasp-asvs",
        )
        with self.assertRaises(ValueError):
            pipeline.process(
                "OWASP/ASVS",
                "run1",
                [self.make_document("hello")],
                last_processed_commit="   ",
            )
if __name__ == "__main__":
    unittest.main()
‎application/utils/harvester/__init__.py‎
+26
-6
Lines changed: 26 additions & 6 deletions
Original file line number	Diff line number	Diff line change
    FilteringBenchmarkResult,
)

from .heading_extractor import (
    HeadingExtractor,
    HeadingNode,
)
from .heading_extractor import HeadingExtractor
from .models import HeadingNode

from .document_builder import DocumentBuilder
from .document_validator import DocumentValidator
from .content_hash import generate_content_hash
from .artifact_registry import ArtifactRegistry
from .document_deduplicator import DocumentDeduplicator
from .checkpoint_manager import CheckpointManager
from .checkpoint_store import CheckpointStore
from .incremental_pipeline import IncrementalPipeline
from .deduplication_metrics import DeduplicationMetrics
from .chunker import ChunkInfo, DocumentChunker
from .chunk_pipeline import DocumentChunkPipeline
from .pipeline import RunSummary, run_harvester

__all__ = [
    "ArtifactRegistry",
    "build_repository_cache_path",
    "CheckpointManager",
    "CheckpointStore",
    "ChunkInfo",
    "ChunkingConfig",
    "ConfigLoaderError",
    "DeduplicationMetrics",
    "DiffRetriever",
    "DocumentBuilder",
    "DocumentChunker",
    "DocumentChunkPipeline",
    "DocumentDeduplicator",
    "DocumentValidator",
    "GitRepositoryClient",
    "FileFilter",
    "FilteringMetricsCollector",
    "FilteringBenchmark",
    "FilteringBenchmarkResult",
    "FilteringMetricsCollector",
    "generate_content_hash",
    "GitRepositoryClient",
    "HeadingExtractor",
    "HeadingNode",
    "IncrementalPipeline",
    "PathRules",
    "PollingConfig",
    "RepositoryClient",
    "RepositoryConfig",
    "RepositoryValidationError",
    "ReposFile",
    "RunSummary",
    "load_repo_config",
    "run_harvester",
    "validate_repositories",
]
‎application/utils/harvester/artifact_registry.py‎
+24
Lines changed: 24 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from datetime import datetime
from .models import ArtifactRegistryRecord
class ArtifactRegistry:
    """
    In-memory registry for artifact deduplication.
    """
    def __init__(self):
        self._records: dict[str, ArtifactRegistryRecord] = {}
    def get(self, artifact_id: str) -> ArtifactRegistryRecord | None:
        return self._records.get(artifact_id)
    def exists(self, artifact_id: str) -> bool:
        return artifact_id in self._records
    def upsert(self, record: ArtifactRegistryRecord) -> None:
        record.last_processed_at = datetime.now()
        self._records[record.artifact_id] = record
    def all(self) -> list[ArtifactRegistryRecord]:
        return list(self._records.values())
‎application/utils/harvester/checkpoint_manager.py‎
+36
Lines changed: 36 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from datetime import datetime
from .models import CheckpointRecord
class CheckpointManager:
    """
    Stores pipeline checkpoints for incremental processing.
    """
    def __init__(self):
        self._checkpoints: dict[str, CheckpointRecord] = {}
    def save(self, checkpoint: CheckpointRecord) -> None:
        self._checkpoints[checkpoint.repository] = checkpoint
    def get(self, repository: str) -> CheckpointRecord | None:
        return self._checkpoints.get(repository)
    def update_commit(self, repository: str, commit_sha: str) -> None:
        checkpoint = self._checkpoints.get(repository)
        if checkpoint is None:
            return
        checkpoint.last_processed_commit = commit_sha
        checkpoint.updated_at = datetime.now()
    def mark_completed(self, repository: str) -> None:
        checkpoint = self._checkpoints.get(repository)
        if checkpoint is None:
            return
        checkpoint.status = "completed"
        checkpoint.updated_at = datetime.now()
‎application/utils/harvester/chunk_pipeline.py‎
+30
Lines changed: 30 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from .chunk_record_builder import ChunkRecordBuilder
from .chunk_record_validator import ChunkRecordValidator
from .chunker import DocumentChunker
from .models import Document, IngestChunkRecord
from .schemas import ChunkingConfig
class DocumentChunkPipeline:
    """
    Runs config-driven chunking followed by structure-aware RFC
    chunk-record construction and validation.
    """
    def __init__(
        self,
        chunking: ChunkingConfig | None = None,
        chunker: DocumentChunker | None = None,
        record_builder: ChunkRecordBuilder | None = None,
        validator: ChunkRecordValidator | None = None,
    ) -> None:
        self._chunker = chunker or DocumentChunker(chunking)
        self._record_builder = record_builder or ChunkRecordBuilder()
        self._validator = validator or ChunkRecordValidator()
    def chunk(self, document: Document) -> list[IngestChunkRecord]:
        chunks = self._chunker.chunk(document.text, document=document)
        records = self._record_builder.build(document, chunks)
        for record in records:
            self._validator.validate(record)
        return records
‎application/utils/harvester/chunk_record_builder.py‎
+114
Lines changed: 114 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from __future__ import annotations
from dataclasses import dataclass
from datetime import datetime, timezone
from typing import TYPE_CHECKING, Optional
from .chunker import DocumentChunker
from .models import ChunkInfo, Document, IngestChunkRecord, SpanInfo
if TYPE_CHECKING:
    from .schemas import ChunkingConfig
@dataclass(slots=True)
class ChunkRecordBuilder:
    """
    Converts ChunkInfo objects into Module-B-facing ingest records.
    """
    SCHEMA_VERSION = "0.2.0"
    def build(
        self,
        document: Document,
        chunks: list[ChunkInfo],
    ) -> list[IngestChunkRecord]:
        total = len(chunks)
        committed_at = document.source.committed_at
        if isinstance(committed_at, datetime):
            if committed_at.tzinfo is None:
                committed_at = committed_at.replace(tzinfo=timezone.utc)
            committed_at_str = committed_at.isoformat().replace("+00:00", "Z")
        else:
            committed_at_str = str(committed_at)
        records: list[IngestChunkRecord] = []
        for index, chunk in enumerate(chunks):
            heading_path = self._heading_path_for_chunk(document, chunk)
            start_line, end_line = self._line_range(
                document.text,
                chunk.start_char_idx,
                chunk.end_char_idx,
            )
            records.append(
                IngestChunkRecord(
                    schema_version=self.SCHEMA_VERSION,
                    chunk_id=f"chk:{document.artifact_id}:{index}",
                    artifact_id=document.artifact_id,
                    pipeline_run_id=document.pipeline_run_id,
                    text=chunk.text,
                    span=SpanInfo(
                        heading_path=heading_path,
                        start_line=start_line,
                        end_line=end_line,
                        index=index,
                        total=total,
                        start_char_idx=chunk.start_char_idx,
                        end_char_idx=chunk.end_char_idx,
                    ),
                    source_type=document.source.type,
                    source_repo=document.source.repository,
                    source_commit_sha=document.source.commit_sha,
                    source_committed_at=committed_at_str,
                    locator_kind=document.locator.kind,
                    locator_id=document.locator.id,
                    locator_path=document.locator.path,
                )
            )
        return records
    @staticmethod
    def _heading_path_for_chunk(
        document: Document,
        chunk: ChunkInfo,
    ) -> list[str]:
        start_line, _ = ChunkRecordBuilder._line_range(
            document.text,
            chunk.start_char_idx,
            chunk.end_char_idx,
        )
        active = [
            heading
            for heading in document.heading_structure
            if heading.start_line <= start_line <= heading.end_line
        ]
        active.sort(key=lambda heading: heading.start_line)
        path: list[str] = []
        for heading in active:
            while len(path) >= heading.level:
                path.pop()
            path.append(heading.text)
        return path
    @staticmethod
    def _line_range(
        text: str,
        start_char_idx: int,
        end_char_idx: int,
    ) -> tuple[int, int]:
        if not 0 <= start_char_idx < end_char_idx <= len(text):
            raise ValueError("Chunk character offsets are outside the source document")
        start_line = text.count("\n", 0, start_char_idx) + 1
        end_position = end_char_idx - 1
        end_line = text.count("\n", 0, end_position) + 1
        return start_line, end_line
def chunk_document(
    document: Document,
    config: Optional["ChunkingConfig"] = None,
) -> list[IngestChunkRecord]:
    chunker = DocumentChunker(config)
    chunks = chunker.chunk(document.text, document=document)
    return ChunkRecordBuilder().build(document, chunks)
‎application/utils/harvester/chunk_record_validator.py‎
+89
Lines changed: 89 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from application.utils.noise_filter.schemas import ChangeRecord
from .models import IngestChunkRecord
class ChunkRecordValidator:
    """
    Validates RFC-facing ingestion chunk records against Module B's contract.
    """
    def validate(self, record: IngestChunkRecord) -> None:
        if not record.schema_version.strip():
            raise ValueError("Chunk record schema_version must not be empty")
        if not record.chunk_id.startswith("chk:"):
            raise ValueError("Chunk record chunk_id must start with 'chk:'")
        if not record.artifact_id.strip():
            raise ValueError("Chunk record artifact_id must not be empty")
        if not record.pipeline_run_id.strip():
            raise ValueError("Chunk record pipeline_run_id must not be empty")
        if not record.text.strip():
            raise ValueError("Chunk record text must not be empty")
        span = record.span
        if span.index is None or span.total is None:
            raise ValueError("Chunk record span must contain index and total")
        if span.index < 0:
            raise ValueError("Chunk record span.index must be non-negative")
        if span.total <= 0:
            raise ValueError("Chunk record span.total must be positive")
        if span.index >= span.total:
            raise ValueError("Chunk record span.index must be less than total")
        if span.start_char_idx is None or span.end_char_idx is None:
            raise ValueError("Chunk record span must contain character offsets")
        if span.start_char_idx < 0 or span.end_char_idx < 0:
            raise ValueError("Chunk record character offsets must be non-negative")
        if span.start_char_idx >= span.end_char_idx:
            raise ValueError(
                "Chunk record start_char_idx must be less than end_char_idx"
            )
        if span.start_line <= 0:
            raise ValueError("Chunk record start_line must be positive")
        if span.end_line < span.start_line:
            raise ValueError("Chunk record end_line must not precede start_line")
        # Canonical gate: must round-trip Module B ChangeRecord.
        ChangeRecord.model_validate(ingest_record_to_payload(record))
def ingest_record_to_payload(record: IngestChunkRecord) -> dict:
    """Serialize an ingest record to the Module A → B JSON payload shape."""
    return {
        "schema_version": record.schema_version,
        "chunk_id": record.chunk_id,
        "artifact_id": record.artifact_id,
        "pipeline_run_id": record.pipeline_run_id,
        "text": record.text,
        "span": {
            "index": record.span.index,
            "total": record.span.total,
            "heading_path": list(record.span.heading_path),
            "start_char_idx": record.span.start_char_idx,
            "end_char_idx": record.span.end_char_idx,
            "start_line": record.span.start_line,
            "end_line": record.span.end_line,
        },
        "source": {
            "type": record.source_type,
            "repo": record.source_repo,
            "commit_sha": record.source_commit_sha,
            "committed_at": record.source_committed_at,
        },
        "locator": {
            "kind": record.locator_kind,
            "id": record.locator_id,
            "path": record.locator_path,
        },
    }
‎application/utils/harvester/chunker.py‎
+115
Lines changed: 115 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from .models import ChunkInfo, Document
from .schemas import ChunkingConfig
__all__ = ["ChunkInfo", "DocumentChunker"]
class DocumentChunker:
    """
    Splits documents using the repository ``ChunkingConfig``.
    Strategies:
    - ``markdown_heading``: one chunk per heading section (plus preamble),
      then size-split oversized sections.
    - ``fixed_size``: sliding windows by approximate token budget.
    - ``html_readability``: treated as fixed_size until a dedicated parser exists.
    """
    # Rough chars-per-token for budget checks without a tokenizer dependency.
    CHARS_PER_TOKEN = 4
    def __init__(self, config: ChunkingConfig | None = None) -> None:
        self._config = config
    def chunk(self, text: str, *, document: Document | None = None) -> list[ChunkInfo]:
        if not text.strip():
            return []
        config = self._config
        if config is None:
            return self._fixed_size(text, max_tokens=1200, overlap_tokens=100)
        strategy = config.strategy
        if strategy == "markdown_heading" and document is not None:
            return self._markdown_heading(text, document, config)
        return self._fixed_size(
            text,
            max_tokens=config.max_tokens,
            overlap_tokens=config.overlap_tokens,
        )
    def _markdown_heading(
        self, text: str, document: Document, config: ChunkingConfig
    ) -> list[ChunkInfo]:
        headings = document.heading_structure
        if not headings:
            return self._fixed_size(
                text,
                max_tokens=config.max_tokens,
                overlap_tokens=config.overlap_tokens,
            )
        lines = text.splitlines(keepends=True)
        # Map 1-based line -> char offset of line start.
        line_starts = [0]
        for line in lines:
            line_starts.append(line_starts[-1] + len(line))
        sections: list[tuple[int, int]] = []
        first_heading_start = headings[0].start_line
        if first_heading_start > 1:
            sections.append((1, first_heading_start - 1))
        for heading in headings:
            sections.append((heading.start_line, heading.end_line))
Comment on lines R63 to R64
        chunks: list[ChunkInfo] = []
        for start_line, end_line in sections:
            start_char = line_starts[start_line - 1]
            end_char = line_starts[min(end_line, len(lines))]
            section = text[start_char:end_char]
            if not section.strip():
                continue
            sized = self._fixed_size(
                section,
                max_tokens=config.max_tokens,
                overlap_tokens=config.overlap_tokens,
            )
            for piece in sized:
                chunks.append(
                    ChunkInfo(
                        text=piece.text,
                        start_char_idx=start_char + piece.start_char_idx,
                        end_char_idx=start_char + piece.end_char_idx,
                    )
                )
        return chunks
    def _fixed_size(
        self, text: str, *, max_tokens: int, overlap_tokens: int
    ) -> list[ChunkInfo]:
        window = max(1, max_tokens * self.CHARS_PER_TOKEN)
        overlap = min(max(0, overlap_tokens * self.CHARS_PER_TOKEN), window - 1)
        step = max(1, window - overlap)
        chunks: list[ChunkInfo] = []
        start = 0
        length = len(text)
        while start < length:
            end = min(start + window, length)
            # Prefer breaking on a newline when not at EOF.
            if end < length:
                nl = text.rfind("\n", start + 1, end)
                if nl > start:
                    end = nl + 1
            piece = text[start:end]
            if piece.strip():
                chunks.append(
                    ChunkInfo(text=piece, start_char_idx=start, end_char_idx=end)
                )
            if end >= length:
                break
            start = start + step if step > 0 else end
            if start >= end:
                start = end
        return chunks
‎application/utils/harvester/content_hash.py‎
+13
Lines changed: 13 additions & 0 deletions
Original file line number	Diff line number	Diff line change
import hashlib
def generate_content_hash(text: str) -> str:
    """
    Generate a deterministic SHA-256 hash for document content.
    Used for artifact-level deduplication.
    """
    return hashlib.sha256(
        text.encode("utf-8"),
    ).hexdigest()
‎application/utils/harvester/deduplication_metrics.py‎
+29
Lines changed: 29 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from dataclasses import dataclass
from .models import DeduplicationStatus
@dataclass(slots=True)
class DeduplicationMetrics:
    total_artifacts_scanned: int = 0
    artifacts_new: int = 0
    artifacts_updated: int = 0
    artifacts_unchanged: int = 0
    artifacts_emitted: int = 0
    artifacts_skipped: int = 0
    def record(self, status: DeduplicationStatus) -> None:
        self.total_artifacts_scanned += 1
        if status is DeduplicationStatus.NEW:
            self.artifacts_new += 1
            self.artifacts_emitted += 1
        elif status is DeduplicationStatus.UPDATED:
            self.artifacts_updated += 1
            self.artifacts_emitted += 1
        elif status is DeduplicationStatus.UNCHANGED:
            self.artifacts_unchanged += 1
            self.artifacts_skipped += 1
‎application/utils/harvester/document_deduplicator.py‎
+54
Lines changed: 54 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from datetime import datetime
from .artifact_registry import ArtifactRegistry
from .content_hash import generate_content_hash
from .models import (
    ArtifactRegistryRecord,
    DeduplicationStatus,
    Document,
)
class DocumentDeduplicator:
    """
    Performs artifact-level deduplication within a process.
    Documents are classified as NEW, UPDATED, or UNCHANGED.
    """
    def __init__(self, registry: ArtifactRegistry):
        self._registry = registry
    def process(self, document: Document) -> DeduplicationStatus:
        content_hash = generate_content_hash(document.text)
        existing = self._registry.get(document.artifact_id)
        now = datetime.now()
        if existing is None:
            self._registry.upsert(
                ArtifactRegistryRecord(
                    artifact_id=document.artifact_id,
                    repository=document.source.repository,
                    locator_path=document.locator.path,
                    content_hash=content_hash,
                    last_commit_sha=document.source.commit_sha,
                    last_pipeline_run=document.pipeline_run_id,
                    last_processed_at=now,
                    status=DeduplicationStatus.NEW.value,
                )
            )
            return DeduplicationStatus.NEW
        existing.last_commit_sha = document.source.commit_sha
        existing.last_pipeline_run = document.pipeline_run_id
        existing.last_processed_at = now
        if existing.content_hash == content_hash:
            existing.status = DeduplicationStatus.UNCHANGED.value
            self._registry.upsert(existing)
            return DeduplicationStatus.UNCHANGED
        existing.content_hash = content_hash
        existing.status = DeduplicationStatus.UPDATED.value
        self._registry.upsert(existing)
        return DeduplicationStatus.UPDATED
‎application/utils/harvester/document_validator.py‎
+30
-6
Lines changed: 30 additions & 6 deletions
Original file line number	Diff line number	Diff line change
    """

    def validate(self, document: Document) -> bool:
        if not document.schema_version:
        if not document.schema_version.strip():
            return False

        if not document.artifact_id.startswith("art:"):
        if not self._valid_artifact_id(document.artifact_id):
            return False

        if not document.pipeline_run_id:
        if not document.pipeline_run_id.strip():
            return False

        if not document.text:
        if document.source.type != "github":
            return False

        if not document.source.repository:
        if not document.source.repository.strip():
            return False

        if not document.source.commit_sha:
        if "/" not in document.source.repository:
Comment on line R30
            return False
        if not document.source.commit_sha.strip():
            return False

        if document.source.committed_at is None:
        if document.locator.kind != "repo_path":
            return False

        if not document.locator.path:
        if not document.locator.id.strip():
            return False
        if not document.locator.path.strip():
            return False
        if document.locator.id != document.locator.path:
            return False

        return True
    @staticmethod
    def _valid_artifact_id(artifact_id: str) -> bool:
        # Expected: art:<owner>/<repo>:<path> with nonempty path.
        if not artifact_id.startswith("art:"):
            return False
        rest = artifact_id[len("art:") :]
        if ":" not in rest:
            return False
        repo, path = rest.split(":", 1)
        if not repo.strip() or "/" not in repo:
            return False
        if not path.strip():
            return False
        return True
‎application/utils/harvester/git_repository_client.py‎
+33
-1
Lines changed: 33 additions & 1 deletion
Original file line number	Diff line number	Diff line change
        )

        try:
            # Do not insert "--" before the revision: that would treat it as a
            # pathspec and leave HEAD unchanged.
            subprocess.run(
                [
                    "git",
                    "-C",
                    str(self.local_path),
                    "checkout",
                    "--",
                    reference,
                ],
                check=True,
    def verify_repository_integrity(self) -> bool:
        return self.is_valid_repository(self.local_path)

    MAX_FILE_SIZE_BYTES = 50 * 1024 * 1024
    def get_file_at_commit(self, commit_sha: str, file_path: str) -> str:
        """
        Retrieve the contents of a file at a specific commit.
        Returns:
            File contents as a string.
        """
        if not commit_sha or commit_sha.startswith("-"):
            raise ValueError("Invalid commit SHA")
        if not file_path or file_path.startswith("-"):
            raise ValueError("Invalid file path")
        if "\x00" in file_path:
            raise ValueError("Invalid file path")
        # Resolve blob size before loading contents into memory.
        size_result = subprocess.run(
            [
                "git",
                "-C",
                str(self.get_local_path()),
                "cat-file",
                "-s",
                f"{commit_sha}:{file_path}",
            ],
            capture_output=True,
            text=True,
            check=True,
            timeout=30,
        )
        size = int(size_result.stdout.strip())
        if size > self.MAX_FILE_SIZE_BYTES:
            raise ValueError(
                f"File size ({size} bytes) exceeds "
                f"maximum supported size ({self.MAX_FILE_SIZE_BYTES} bytes)."
            )

        result = subprocess.run(
            [
                "git",
                "-C",
                str(self.get_local_path()),
                "show",
                "--end-of-options",
                f"{commit_sha}:{file_path}",
            ],
            capture_output=True,
‎application/utils/harvester/harvest_writer.py‎
+50
Lines changed: 50 additions & 0 deletions
Original file line number	Diff line number	Diff line change
"""Persist Module A ChangeRecord payloads into ``harvest_input``."""
from __future__ import annotations
from typing import Any, Iterable
from application.database.db import HarvestInput
from application.utils.harvester.chunk_record_validator import ingest_record_to_payload
from application.utils.harvester.models import IngestChunkRecord
def write_harvest_input(
    session: Any,
    pipeline_run_id: str,
    records: Iterable[IngestChunkRecord],
    *,
    dry_run: bool = False,
) -> int:
    """
    Insert pending ``harvest_input`` rows for one pipeline run.
    Top-level ``pipeline_run_id`` matches the payload field (Module A contract).
    Returns the number of rows that would be / were written.
    """
    if not pipeline_run_id or not pipeline_run_id.strip():
        raise ValueError("pipeline_run_id must be non-empty")
    written = 0
    for record in records:
        if record.pipeline_run_id != pipeline_run_id:
            raise ValueError(
                f"record pipeline_run_id {record.pipeline_run_id!r} "
                f"!= harvest run {pipeline_run_id!r}"
            )
        payload = ingest_record_to_payload(record)
        if dry_run:
            written += 1
            continue
        session.add(
            HarvestInput(
                pipeline_run_id=pipeline_run_id,
                status="pending",
                payload=payload,
            )
        )
Comment on lines R39 to R45
        written += 1
    if not dry_run and written:
        session.commit()
    return written
‎application/utils/harvester/heading_extractor.py‎
+33
-8
Lines changed: 33 additions & 8 deletions
Original file line number	Diff line number	Diff line change
from dataclasses import dataclass
from .models import HeadingNode


@dataclass(slots=True)
class _FenceState:
    in_fence: bool = False
class HeadingExtractor:
    """
    Extracts Markdown headings and their line ranges.
    Extracts Markdown ATX headings and their line ranges.
    Heading ranges extend until the next heading of the same
    or higher level, or the end of the document.
    or higher level, or the end of the document. Lines inside
    fenced code blocks and indented code blocks are ignored.
    """

    def extract(self, text: str) -> list[HeadingNode]:
        lines = text.splitlines()
        headings: list[HeadingNode] = []
        fence = _FenceState()

        for line_number, line in enumerate(lines, start=1):
            stripped = line.lstrip()
            if self._toggle_fence(line, fence):
                continue
            if fence.in_fence:
                continue
            if self._is_indented_code(line):
                continue

            stripped = line.lstrip()
            if not stripped.startswith("#"):
                continue

            hashes = len(stripped) - len(stripped.lstrip("#"))
            if hashes == 0:
            if hashes == 0 or hashes > 6:
                continue
            if len(stripped) > hashes and stripped[hashes] != " ":
            if len(stripped) <= hashes or stripped[hashes] != " ":
                continue

            headings.append(
                    break

        return headings
    @staticmethod
    def _toggle_fence(line: str, fence: _FenceState) -> bool:
        stripped = line.lstrip()
        if stripped.startswith("```") or stripped.startswith("~~~"):
            fence.in_fence = not fence.in_fence
Comment on lines R62 to R64
            return True
        return False
    @staticmethod
    def _is_indented_code(line: str) -> bool:
        if not line.strip():
            return False
        return line.startswith("    ") or line.startswith("\t")
‎application/utils/harvester/incremental_pipeline.py‎
+99
Lines changed: 99 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from datetime import datetime, timezone
from typing import Any
from .artifact_registry import ArtifactRegistry
from .checkpoint_store import CheckpointStore
from .deduplication_metrics import DeduplicationMetrics
from .document_deduplicator import DocumentDeduplicator
from .document_validator import DocumentValidator
from .models import (
    DeduplicationStatus,
    Document,
    RepositoryCheckpoint,
)
class IncrementalPipeline:
    """
    Coordinates document validation, deduplication, and durable checkpoints.
    Only NEW or UPDATED validated documents are emitted downstream.
    Checkpoints are written via ``CheckpointStore`` (Postgres/SQLite).
    """
    def __init__(
        self,
        deduplicator: DocumentDeduplicator | None = None,
        checkpoint_store: CheckpointStore | None = None,
        validator: DocumentValidator | None = None,
        *,
        provider: str = "github",
        owner: str = "",
        repository_name: str = "",
        branch: str = "main",
        repository_id: str = "",
    ) -> None:
        self._deduplicator = deduplicator or DocumentDeduplicator(ArtifactRegistry())
        self._checkpoint_store = checkpoint_store or CheckpointStore()
        self._validator = validator or DocumentValidator()
        self.metrics = DeduplicationMetrics()
        self._provider = provider
        self._owner = owner
        self._repository_name = repository_name
        self._branch = branch
        self._repository_id = repository_id
    def process(
        self,
        repository: str,
        pipeline_run_id: str,
        documents: list[Document],
        *,
        last_processed_commit: str | None = None,
    ) -> list[Document]:
        emitted: list[Document] = []
        metrics = DeduplicationMetrics()
        for document in documents:
            if document.pipeline_run_id != pipeline_run_id:
                raise ValueError(
                    f"document pipeline_run_id {document.pipeline_run_id!r} "
                    f"does not match process run {pipeline_run_id!r}"
                )
            if document.source.repository != repository:
                raise ValueError(
                    f"document source.repository {document.source.repository!r} "
                    f"does not match process repository {repository!r}"
                )
            if not self._validator.validate(document):
                raise ValueError(f"document failed validation: {document.artifact_id}")
            status = self._deduplicator.process(document)
            metrics.record(status)
            if status != DeduplicationStatus.UNCHANGED:
                emitted.append(document)
        commit_sha = last_processed_commit
        if commit_sha is None and documents:
            commit_sha = documents[-1].source.commit_sha
        if commit_sha:
            self._persist_checkpoint(pipeline_run_id, commit_sha)
Comment on line R80
        self.metrics = metrics
        return emitted
    def _persist_checkpoint(self, pipeline_run_id: str, commit_sha: str) -> None:
        if not commit_sha.strip():
            raise ValueError("refusing to persist empty last_processed_commit")
        repository_id = self._repository_id or f"{self._owner}/{self._repository_name}"
        self._checkpoint_store.save(
            RepositoryCheckpoint(
                repository_id=repository_id,
                last_processed_commit=commit_sha,
                updated_at=datetime.now(timezone.utc),
                provider=self._provider,
                owner=self._owner or repository_id.split("/")[0],
                repository=self._repository_name or repository_id.split("/", 1)[-1],
                branch=self._branch,
            )
        )
‎application/utils/harvester/models.py‎
+65
Lines changed: 65 additions & 0 deletions
Original file line number	Diff line number	Diff line change
from dataclasses import dataclass
from datetime import datetime
from enum import Enum
from pydantic import BaseModel


    locator: Locator
    heading_structure: list[HeadingNode]
    span: SpanInfo | None = None
@dataclass(slots=True)
class ArtifactRegistryRecord:
    """
    Tracks the processing state of an artifact.
    Used for deduplication within a harvester process.
    """
    artifact_id: str
    repository: str
    locator_path: str
    content_hash: str
    last_commit_sha: str
    last_pipeline_run: str
    last_processed_at: datetime
    status: str
class DeduplicationStatus(str, Enum):
    NEW = "new"
    UPDATED = "updated"
    UNCHANGED = "unchanged"
@dataclass(slots=True)
class CheckpointRecord:
    repository: str
    pipeline_run_id: str
    last_processed_commit: str
    status: str
    updated_at: datetime
@dataclass(slots=True)
class ChunkInfo:
    text: str
    start_char_idx: int
    end_char_idx: int
@dataclass(slots=True)
class IngestChunkRecord:
    """
    RFC-facing chunk ready to validate as Module B ChangeRecord.
    ``source_repo`` is the ``owner/repo`` string written to ``source.repo``.
    ``committed_at`` is an ISO-8601 string (or None only before validation).
    """
    schema_version: str
    chunk_id: str
    artifact_id: str
    pipeline_run_id: str
    text: str
    span: SpanInfo
    source_type: str
    source_repo: str
    source_commit_sha: str
    source_committed_at: str
    locator_kind: str
    locator_id: str
    locator_path: str
‎application/utils/harvester/pipeline.py‎
+217
Lines changed: 217 additions & 0 deletions
Original file line number	Diff line number	Diff line change
"""Module A entry point: harvest OWASP repos → ``harvest_input``.
Shape mirrors Module B's ``run_noise_filter``:
``(session, pipeline_run_id, ..., dry_run) -> RunSummary`` with ``to_json()``.
"""
from __future__ import annotations
import json
import logging
from dataclasses import asdict, dataclass
from datetime import datetime, timezone
from pathlib import Path
from typing import Any, Optional
from application.utils.harvester.change_detector import ChangeDetector
from application.utils.harvester.checkpoint_store import CheckpointStore
from application.utils.harvester.chunk_pipeline import DocumentChunkPipeline
from application.utils.harvester.config_loader import load_repo_config
from application.utils.harvester.document_builder import DocumentBuilder
from application.utils.harvester.file_filter import FileFilter
from application.utils.harvester.git_repository_client import GitRepositoryClient
from application.utils.harvester.harvest_writer import write_harvest_input
from application.utils.harvester.incremental_pipeline import IncrementalPipeline
from application.utils.harvester.models import DiffBlock, Document
from application.utils.harvester.repos_validator import validate_repositories
from application.utils.harvester.schemas import RepositoryConfig
logger = logging.getLogger(__name__)
DEFAULT_REPOS_YAML = Path(__file__).with_name("repos.yaml")
@dataclass
class RunSummary:
    """Outcome of one Module A harvest run; the CLI emits this as JSON."""
    run_id: str
    repositories: int = 0
    files_seen: int = 0
    files_retained: int = 0
    documents_emitted: int = 0
    chunks_written: int = 0
    errors: int = 0
    dry_run: bool = False
    status: str = "ok"
    def to_json(self) -> str:
        return json.dumps(asdict(self))
def run_harvester(
    session: Any,
    pipeline_run_id: str,
    *,
    repos_yaml: str | Path | None = None,
    dry_run: bool = False,
    sync_repos: bool = True,
) -> RunSummary:
    """
    Harvest configured repositories and stage chunks in ``harvest_input``.
    For each enabled repo: optionally sync, detect files changed since the
    durable checkpoint, build documents, dedupe, chunk, validate as
    ChangeRecords, and insert pending ``harvest_input`` rows.
    """
    if not pipeline_run_id or not pipeline_run_id.strip():
        raise ValueError("run_harvester needs a non-empty pipeline_run_id")
    run_id = pipeline_run_id.strip()
    summary = RunSummary(run_id=run_id, dry_run=dry_run)
    repos_path = Path(repos_yaml) if repos_yaml else DEFAULT_REPOS_YAML
    repos_file = load_repo_config(repos_path)
    validate_repositories(repos_file.repositories)
    checkpoint_store = CheckpointStore(session=session)
    builder = DocumentBuilder()
    for repo_cfg in repos_file.repositories:
        if not repo_cfg.enabled:
            continue
        summary.repositories += 1
        try:
            written = _harvest_repository(
                session=session,
                repo_cfg=repo_cfg,
                pipeline_run_id=run_id,
                checkpoint_store=checkpoint_store,
                builder=builder,
                dry_run=dry_run,
                sync_repos=sync_repos,
                summary=summary,
            )
            summary.chunks_written += written
        except Exception:
            summary.errors += 1
            logger.exception(
                "harvester failed for repository %s/%s",
                repo_cfg.owner,
                repo_cfg.repo,
            )
    if summary.errors and summary.chunks_written == 0:
        summary.status = "degraded"
    elif summary.errors:
        summary.status = "degraded"
    return summary
def _harvest_repository(
    *,
    session: Any,
    repo_cfg: RepositoryConfig,
    pipeline_run_id: str,
    checkpoint_store: CheckpointStore,
    builder: DocumentBuilder,
    dry_run: bool,
    sync_repos: bool,
    summary: RunSummary,
) -> int:
    client = GitRepositoryClient(
        owner=repo_cfg.owner,
        repository=repo_cfg.repo,
        branch=repo_cfg.branch,
    )
    if sync_repos:
        client.sync()
    head = client.get_current_commit_sha()
    checkpoint = checkpoint_store.load(repo_cfg.id)
    base = checkpoint.last_processed_commit if checkpoint else None
    detector = ChangeDetector(client)
    if base:
        modified = detector.get_modified_files_since(base, head)
    else:
        # First run: treat all tracked files under include paths as candidates
        # via an empty-tree diff against HEAD.
        modified = detector.get_modified_files_since(
            "4b825dc642cb6eb9a060e54bf8d6927bf442cfb4",  # git empty tree
            head,
        )
    file_filter = FileFilter(exclude_patterns=list(repo_cfg.paths.exclude))
    # Path include globs: keep files matching any include pattern.
    from pathspec import PathSpec
    include_spec = PathSpec.from_lines("gitignore", repo_cfg.paths.include)
    candidates = [
        path
        for path in modified
        if include_spec.match_file(path) and path in file_filter.filter_files([path])
    ]
    summary.files_seen += len(modified)
    summary.files_retained += len(candidates)
    committed_at = _commit_timestamp(client, head)
    documents: list[Document] = []
    for path in candidates:
        text = client.get_file_at_commit(head, path)
        block = DiffBlock(
            file_path=path,
            added_lines=[],
            repository=f"{repo_cfg.owner}/{repo_cfg.repo}",
            commit_sha=head,
            committed_at=committed_at,
        )
        documents.append(builder.build(block, text, pipeline_run_id))
    incremental = IncrementalPipeline(
        checkpoint_store=checkpoint_store,
        provider="github",
        owner=repo_cfg.owner,
        repository_name=repo_cfg.repo,
        branch=repo_cfg.branch,
        repository_id=repo_cfg.id,
    )
    emitted = incremental.process(
        repository=f"{repo_cfg.owner}/{repo_cfg.repo}",
        pipeline_run_id=pipeline_run_id,
        documents=documents,
        last_processed_commit=head,
    )
    summary.documents_emitted += len(emitted)
    chunk_pipeline = DocumentChunkPipeline(chunking=repo_cfg.chunking)
    records = []
    for document in emitted:
        records.extend(chunk_pipeline.chunk(document))
    return write_harvest_input(session, pipeline_run_id, records, dry_run=dry_run)
def _commit_timestamp(client: GitRepositoryClient, commit_sha: str) -> datetime:
    import subprocess
    result = subprocess.run(
        [
            "git",
            "-C",
            str(client.get_local_path()),
            "show",
            "-s",
            "--format=%cI",
            commit_sha,
        ],
        check=True,
        capture_output=True,
        text=True,
        timeout=60,
    )
    raw = result.stdout.strip()
    # fromisoformat handles offsets; normalize Z.
    if raw.endswith("Z"):
        raw = raw[:-1] + "+00:00"
    return datetime.fromisoformat(raw).astimezone(timezone.utc)
‎application/utils/oie_orchestrator/__init__.py‎
+15
Lines changed: 15 additions & 0 deletions
Original file line number	Diff line number	Diff line change
"""OIE A→B→C orchestrator package."""
from .pipeline import (
    OrchestratorResult,
    StageResult,
    run_oie_demo_pipeline,
    run_oie_pipeline,
)
__all__ = [
    "OrchestratorResult",
    "StageResult",
    "run_oie_demo_pipeline",
    "run_oie_pipeline",
]
‎application/utils/oie_orchestrator/pipeline.py‎
+298
Lines changed: 298 additions & 0 deletions
Original file line number	Diff line number	Diff line change
"""OIE orchestrator — A → B → C for one ``pipeline_run_id``.
Production sequencing: run each stage, wait for process/library return,
then start the next. Modules communicate only through DB tables:
  A writes ``harvest_input`` → B writes ``knowledge_queue`` → C writes
  ``decision_queue`` / stamps ``consumed_at``.
"""
from __future__ import annotations
import json
import logging
from dataclasses import asdict, dataclass, field
from datetime import datetime, timezone
from typing import Any, Callable, Dict, List, Optional
logger = logging.getLogger(__name__)
@dataclass
class StageResult:
    """Outcome of one orchestrator stage (module A, B, or C)."""
    name: str
    status: str  # ok | skipped | error
    detail: str
    summary: Optional[Dict[str, Any]] = None
@dataclass
class OrchestratorResult:
    """Full A→B→C run summary (JSON-serializable)."""
    run_id: str
    dry_run: bool
    stages: List[StageResult] = field(default_factory=list)
    def to_dict(self) -> Dict[str, Any]:
        return {
            "run_id": self.run_id,
            "dry_run": self.dry_run,
            "stages": [asdict(s) for s in self.stages],
            "ok": all(s.status in ("ok", "skipped", "degraded") for s in self.stages),
        }
    def to_json(self) -> str:
        return json.dumps(self.to_dict(), indent=2)
def _summary_dict(summary: Any) -> Dict[str, Any]:
    if hasattr(summary, "to_json"):
        return json.loads(summary.to_json())
    if hasattr(summary, "__dict__"):
        return dict(summary.__dict__)
    return {"raw": str(summary)}
def _stage_status_from_summary(summary: Any) -> str:
    """Map module RunSummary.status to orchestrator stage status.
    Module C currently always reports ``degraded: N decided without the safety
    path`` behind ``NullSafetyGuard`` — that is declared, not a hard failure, so
    the stage is ``degraded`` (pipeline may continue; Module D must refuse while
    unevaluated > 0). Other ``degraded`` values (A/B partial runs, C row errors)
    map to ``error`` so ``stop_on_error`` can halt.
    """
    raw = getattr(summary, "status", None)
    if isinstance(summary, dict):
        raw = summary.get("status", raw)
    text = str(raw or "ok")
    if text == "ok":
        return "ok"
    if text.startswith("degraded") and "without the safety path" in text:
        # Pure safety-path gap, no errored rows mixed in.
        if "errored" not in text:
            return "degraded"
    return "error"
def _connect(cache_file: str) -> Any:
    from application import sqla
    from application.cmd.cre_main import db_connect
    db_connect(cache_file)
    return sqla.session
def _stage_module_a(
    run_id: str,
    cache_file: str,
    *,
    skip: bool,
    dry_run: bool,
    sync_repos: bool,
    run_harvester_fn: Optional[Callable[..., Any]] = None,
) -> StageResult:
    if skip:
        return StageResult(
            name="module_a_harvester",
            status="skipped",
            detail="skip_a=True; harvester not invoked",
        )
    fn = run_harvester_fn
    if fn is None:
        from application.utils.harvester.pipeline import run_harvester
        fn = run_harvester
    try:
        session = _connect(cache_file)
        summary = fn(
            session,
            run_id,
            dry_run=dry_run,
            sync_repos=sync_repos,
        )
        return StageResult(
            name="module_a_harvester",
            status=_stage_status_from_summary(summary),
            detail=f"run_harvester completed for run_id={run_id!r}",
            summary=_summary_dict(summary),
        )
    except Exception as exc:  # noqa: BLE001
        logger.exception("Module A stage failed")
        return StageResult(
            name="module_a_harvester",
            status="error",
            detail=f"run_harvester failed: {exc}",
        )
def _stage_module_b(
    run_id: str,
    cache_file: str,
    *,
    skip: bool,
    dry_run: bool,
    run_noise_filter_fn: Optional[Callable[..., Any]] = None,
) -> StageResult:
    if skip:
        return StageResult(
            name="module_b_noise_filter",
            status="skipped",
            detail="skip_b=True; noise filter not invoked",
        )
    fn = run_noise_filter_fn
    if fn is None:
        from application.utils.noise_filter.pipeline import run_noise_filter
        fn = run_noise_filter
    try:
        session = _connect(cache_file)
        summary = fn(session, run_id, dry_run=dry_run)
        return StageResult(
            name="module_b_noise_filter",
            status=_stage_status_from_summary(summary),
            detail=f"run_noise_filter completed for run_id={run_id!r}",
            summary=_summary_dict(summary),
        )
    except Exception as exc:  # noqa: BLE001
        logger.exception("Module B stage failed")
        return StageResult(
            name="module_b_noise_filter",
            status="error",
            detail=f"run_noise_filter failed: {exc}",
        )
def _stage_module_c(
    run_id: str,
    cache_file: str,
    *,
    skip: bool,
    dry_run: bool,
    run_librarian_queue_fn: Optional[Callable[..., Any]] = None,
) -> StageResult:
    if skip:
        return StageResult(
            name="module_c_librarian",
            status="skipped",
            detail="skip_c=True; librarian not invoked",
        )
    try:
        if run_librarian_queue_fn is not None:
            # Injected path (tests / hermetic smoke): caller owns session + sink.
            summary = run_librarian_queue_fn(run_id, dry_run=dry_run)
        else:
            from application.cmd.cre_main import db_connect
            from application.utils.librarian.config_loader import load_config
            from application.utils.librarian.envelope_sink import (
                DbEnvelopeSink,
                NullEnvelopeSink,
            )
            from application.utils.librarian.factory import build_components
            from application.utils.librarian.queue_runner import run_librarian_queue
            cfg = load_config()
            database = db_connect(path=cache_file)
            components = build_components(database, config=cfg)
            sink = (
                NullEnvelopeSink()
                if dry_run
                else DbEnvelopeSink(database.session, run_id)
            )
            summary = run_librarian_queue(
                database.session,
                run_id,
                components,
                cfg,
                at=datetime.now(timezone.utc),
                sink=sink,
                dry_run=dry_run,
            )
        return StageResult(
            name="module_c_librarian",
            status=_stage_status_from_summary(summary),
            detail=f"run_librarian_queue completed for run_id={run_id!r}",
            summary=(
                _summary_dict(summary) if not isinstance(summary, dict) else summary
            ),
        )
    except Exception as exc:  # noqa: BLE001
        logger.exception("Module C stage failed")
        return StageResult(
            name="module_c_librarian",
            status="error",
            detail=f"run_librarian_queue failed: {exc}",
        )
def run_oie_pipeline(
    *,
    cache_file: str,
    pipeline_run_id: Optional[str] = None,
    skip_a: bool = False,
    skip_b: bool = False,
    skip_c: bool = False,
    dry_run: bool = False,
    sync_repos: bool = True,
    stop_on_error: bool = True,
    run_harvester_fn: Optional[Callable[..., Any]] = None,
    run_noise_filter_fn: Optional[Callable[..., Any]] = None,
    run_librarian_queue_fn: Optional[Callable[..., Any]] = None,
) -> OrchestratorResult:
    """
    Run A→B→C for one ``pipeline_run_id``.
    Defaults run all stages for real (not dry-run). Inject callables in tests.
    When ``stop_on_error`` is True (default), later stages are skipped after
    an earlier stage returns ``error``.
    """
    run_id = (pipeline_run_id or "").strip() or (
        datetime.now(timezone.utc).strftime("%Y%m%dT%H%M%SZ")
    )
Comment on lines R258 to R260
    result = OrchestratorResult(run_id=run_id, dry_run=dry_run)
    a = _stage_module_a(
        run_id,
        cache_file,
        skip=skip_a,
        dry_run=dry_run,
        sync_repos=sync_repos,
        run_harvester_fn=run_harvester_fn,
    )
    result.stages.append(a)
    if stop_on_error and a.status == "error":
        return result
    b = _stage_module_b(
        run_id,
        cache_file,
        skip=skip_b,
        dry_run=dry_run,
        run_noise_filter_fn=run_noise_filter_fn,
    )
    result.stages.append(b)
    if stop_on_error and b.status == "error":
        return result
    c = _stage_module_c(
        run_id,
        cache_file,
        skip=skip_c,
        dry_run=dry_run,
        run_librarian_queue_fn=run_librarian_queue_fn,
    )
    result.stages.append(c)
    return result
# Back-compat alias used by the draft PoC script name.
run_oie_demo_pipeline = run_oie_pipeline

this much context is enough for the final evaluation blog along with the RFC and other context you already have
